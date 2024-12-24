#!/bin/bash

## Project Name

projName='Sandbox'

## Output Directory

sandboxOutput='./Bin/Sandbox.exe'

libFile='CatEngine'

## CPP Files

sandboxApp=$projName'/src/SandboxApp.cpp'

## Include Directories

catEngineSrc='CatEngine/src'

src=$projName'/src'

g++ $sandboxApp -L./Bin -l$libFile -I $catEngineSrc -I $src -o ./Bin/$projName.exe

