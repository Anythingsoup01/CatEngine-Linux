#!/bin/bash
 
appPaths=($(find . -name "*.cpp" | grep Application/src))
sandPaths=$(find . -name "*.cpp" | grep Sandbox)

Config=debug
ProjName=Application

appOutputDir=./bin/$Config/$ProjName

CATENGINE=Application/src
SPDLOG=Application/vendors/spdlog/include
printf "APPLICATION\n"
for path in ${appPaths[@]}
do
    filename_full=${path##*/}
    filename=${filename_full%.*}

    printf "Compiling $filename\n"
    g++ -c $path -I$SPDLOG -static -pipe -Wall -o $appOutputDir/$filename.o
done

binPaths=($(find . -name "*.o" | grep bin))
libPath=($(find . -name "*.a" | grep bin))
objectPaths="${appOutputDir}/catengine.a"
for path in ${binPaths[@]}
do
    objectPaths+=' '"${path}"
done
ar rcs $objectPaths

ProjName=Sandbox
sandOutputDir=./bin/$Config/$ProjName

printf "SANDBOX\n"
for path in ${sandPaths[@]}
do
    printf "Compiling Sandbox\n"
    g++ $path -I$SPDLOG -I$CATENGINE -pipe -L./$appOutputDir -lcatengine -o $sandOutputDir/main.exe
done

if [[ $? -eq 0 ]]; then
	printf "Build Successful\n"
else
	printf "Build Failed!"
fi
