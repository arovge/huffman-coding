/*
 * Project: huffman-coding
 * Developer: Austin Rovge
 * Date: 2/10/2019
 */

#ifndef HUFFMAN_CODING_HUFFMANUTILITIES_H
#define HUFFMAN_CODING_HUFFMANUTILITIES_H

#include "vector"
#include "HuffmanTree.h"
#include <unordered_map>
#include <string>

class HuffmanUtilities {
public:
    static std::vector<int> calculateFrequencies(std::string input);
    static HuffmanTree* buildTree(std::vector<int>);

private:
    static const int ASCII_VALUES = 256;
    static std::unordered_map<char, std::string> map;
};


#endif // HUFFMAN_CODING_HUFFMANUTILITIES_H
