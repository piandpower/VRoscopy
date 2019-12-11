// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class VRoscopy : ModuleRules
{
	public VRoscopy(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "HeadMountedDisplay",
            "SlateCore",
            //Additional Modules
            "UnrealEd",
            "Blutility",
            "ContentBrowser",
            "AssetRegistry",
            "Python",
            "PythonScriptPlugin"
        });

		PrivateDependencyModuleNames.AddRange(new string[] { "PythonScriptPlugin" });

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
