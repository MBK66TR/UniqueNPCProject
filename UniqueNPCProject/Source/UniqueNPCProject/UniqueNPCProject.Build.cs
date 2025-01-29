// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UniqueNPCProject : ModuleRules
{
	public UniqueNPCProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput", "AIModule", "NavigationSystem", "UMG" });

		PrivateDependencyModuleNames.AddRange(new string[] {
			"Slate",
			"SlateCore"
		});
	}
}
