cmake_minimum_required(VERSION 3.16)
project(VM)

set(CMAKE_CXX_STANDARD 17)

add_executable(VM main.cpp Memory.cpp Memory.h IMemory.h Common.h BinaryHelper.h Reg.cpp Reg.h IReg.h)
