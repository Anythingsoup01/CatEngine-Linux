cmake_minimum_required(VERSION 3.21)

project(CatEngine)

file(GLOB SOURCE_FILES src/**/*.cpp)

add_library(CatEngine STATIC ${SOURCE_FILES})

target_precompile_headers(CatEngine PRIVATE src/cepch.h)

# Local Includes

target_include_directories(CatEngine PRIVATE include ${PROJECT_SOURCE_DIR}/vendors/spdlog/include)
target_include_directories(CatEngine PRIVATE include ${PROJECT_SOURCE_DIR})
target_include_directories(CatEngine PRIVATE include ${PROJECT_SOURCE_DIR}/src) 
