# CMakeのバージョンを指定
cmake_minimum_required(VERSION 3.13)

# コンパイラの設定(既に設定済みなのでコメントアウト)
#set(CMAKE_CXX_COMPILER g++)
#set(CMAKE_C_COMPILER gcc)

# プロジェクト名と使用する言語を設定
project(test CXX)

# 実行ファイル生成に必要なソースファイル群を設定
add_executable(main	# 実行ファイル名

# 以下ソースファイル群
elatos.cpp
)

