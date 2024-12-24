#!/bin/bash

startTime=$(date +%s)

## Build Lib Files

./CatEngine/CatEngineProj.sh

libBuildEndTime=$(date +%s)

elapsedLibBuildTime=$((libBuildEndTime - startTime))

echo "Lib Build Time: $elapsedLibBuildTime s"

## Build Executable

./Sandbox/SandboxProj.sh

totalBuildEndTime=$(date +%s)

elapsedBuildTime=$((totalBuildEndTime - startTime))

echo "Total Build Time: $elapsedBuildTime s"

