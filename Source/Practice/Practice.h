// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "EngineMinimal.h"

DECLARE_LOG_CATEGORY_EXTERN(Practice, Log, All);
#define PLOG_CALLINFO (FString(__FUNCTION__) + TEXT("(") + FString::FromInt(__LINE__) + TEXT(")"))
#define PLOG_S(Verbosity) UE_LOG(Practice, Verbosity, TEXT("%s"), *PLOG_CALLINFO)
#define PLOG(Verbosity, Format, ...) UE_LOG(Practice, Verbosity, TEXT("%s %s"), *PLOG_CALLINFO, *FString::Printf(Format, ##__VA_ARGS__))

#define PCHECK(Expr, ...) {if(!(Expr)) {PLOG(Error, TEXT("ASSERTION : %s"), TEXT("'"#Expr"'")); return __VA_ARGS__;}}
