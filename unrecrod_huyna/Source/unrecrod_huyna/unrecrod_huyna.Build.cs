// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class unrecrod_huyna : ModuleRules
{
	public unrecrod_huyna(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
