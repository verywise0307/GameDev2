// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class donut : ModuleRules
{
	public donut(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
