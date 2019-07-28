cmake_minimum_required(VERSION 3.14)
project(TextQuery)

set(CMAKE_CXX_STANDARD 14)

add_executable(TextQuery Soures/main.cpp Soures/TextQuery.cpp Soures/TextQuery.cpp Header/TextQuery.h Soures/QueryResult.cpp Header/QueryResult.h)