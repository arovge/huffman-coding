cmake_minimum_required (VERSION 2.6)
project (huffman-coding)

file(GLOB huffman-coding-src "src/*.h" "src/*.cpp")

add_executable(huffman-coding ${huffman-coding-src})
