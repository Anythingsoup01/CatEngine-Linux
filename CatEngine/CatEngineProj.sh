#!/bin/bash

## Output Directory

applicationOutput='./Bin-Int/Application.o'

libOutput='./Bin/libCatEngine.a'

## CPP Files

application='CatEngine/src/Core/Application.cpp'

## Include Directories

src='CatEngine'

g++ -c $application -o $applicationOutput -I $src
ar rcs $libOutput $applicationOutput
