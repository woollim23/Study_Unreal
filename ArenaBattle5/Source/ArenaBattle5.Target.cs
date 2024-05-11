// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class ArenaBattle5Target : TargetRules
{
	public ArenaBattle5Target(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V4;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_1;
		ExtraModuleNames.Add("ArenaBattle5");

        ExtraModuleNames.AddRange(new string[] { "ArenaBattle5", "ArenaBattle5Setting" });
    }
}
