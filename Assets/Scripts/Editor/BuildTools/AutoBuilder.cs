using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using UnityEditor;
using UnityEditor.Build.Reporting;
using UnityEngine;

namespace TFPlay.BuildTools
{
    public class AutoBuilder
    {
        private static readonly string GameName = PlayerSettings.productName.Replace(" ", "");

        private const string CMD_LINE_ARG_BUILD_NUMBER = "buildNumber";

        private static string BuildLocation;
        private static Dictionary<string, string> CommandLineArgs;

        public static void BuildAndroid_regular()
        {
            ProcessCommandLineArgs();

            BuildLocation = CreateOrGetBuildDirectory();
            Directory.CreateDirectory(BuildLocation);

            var playerOptions = CreatePlayerOptions(GetBuildName(), BuildTarget.Android);
            var report = BuildPipeline.BuildPlayer(playerOptions);

            if (report.summary.result == BuildResult.Failed)
            {
                if (Application.isBatchMode)
                {
                    EditorApplication.Exit(1);
                }
            }
        }

        private static void ProcessCommandLineArgs()
        {
            CommandLineArgs = new Dictionary<string, string>();
            var args = Environment.GetCommandLineArgs();
            for (int i = 0; i < args.Length; i++)
            {
                if (args.Length > i + 1)
                {
                    CommandLineArgs.Add(args[i], args[i + 1]);
                }
            }
        }

        private static string CreateOrGetBuildDirectory()
        {
            var buildsFolder = Path.Combine(Directory.GetCurrentDirectory(), "Builds");
            if (!Directory.Exists(buildsFolder))
            {
                Directory.CreateDirectory(buildsFolder);
            }
            return buildsFolder;
        }

        private static string GetBuildName()
        {
            var buildName = GameName;
            buildName += "-" + PlayerSettings.bundleVersion;
            buildName += "(" + PlayerSettings.Android.bundleVersionCode + ")";
            if (CommandLineArgs.TryGetValue(CMD_LINE_ARG_BUILD_NUMBER, out string buildNumber))
            {
                buildName += "-" + CommandLineArgs[CMD_LINE_ARG_BUILD_NUMBER];
            }
            buildName += ".apk";
            return buildName;
        }

        private static BuildPlayerOptions CreatePlayerOptions(string buildName, BuildTarget platformName)
        {
            return new BuildPlayerOptions()
            {
                scenes = EnabledScenePaths,
                locationPathName = Path.Combine(BuildLocation, buildName),
                target = platformName,
                options = BuildOptions.CompressWithLz4
            };
        }

        private static string[] EnabledScenePaths => EditorBuildSettings.scenes
            .Where((scene) => scene.enabled == true)
            .Select((scene) => scene.path)
            .ToArray();
    }
}
