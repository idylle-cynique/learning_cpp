# CMakeのバージョンを指定
cmake_minimum_required(VERSION 3.13)

#set(CMAKE_C_COMPLIER "C:/Program Files/mingw-w64/x86_64-8.1.0-posix-seh-rt_v6-rev0/mingw64/bin/gcc")
#set(CMAKE_CXX_COMPILER "C:/Program Files/mingw-w64/x86_64-8.1.0-posix-seh-rt_v6-rev0/mingw64/bin/g++")

# プロジェクト名と使用する言語を設定
project(main CXX)

# a.outという実行ファイルをtest_makefile.cppとprintohoge.cppから作成
add_executable(main
test_makefile.cpp
printhoge.h
printhoge.cpp
)

