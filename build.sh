#!/bin/bash

cd Application/src/CatEngine && g++ -c App.cpp -o App.o
cd ../../../
ar rcs libcatengine.a Application/src/CatEngine/App.o
g++ Sandbox/src/SandboxApp.cpp -static -L. -lcatengine -o main.exe

printf "Build Successful\n"
