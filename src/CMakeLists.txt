cmake_minimum_required(VERSION 3.20)

project(DynamicBone)

include($ENV{DEVKIT_LOCATION}/cmake/pluginEntry.cmake)

set(SOURCE_FILES
   DynamicBone.h
   DynamicBone.cpp
   main.cpp
) 

set(LIBRARIES 
   OpenMaya 
   Foundation 
) 

build_plugin()
