// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FieldTest : ModuleRules
{
	public FieldTest(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
