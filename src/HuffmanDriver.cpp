/*
 * Project: huffman-coding
 * Developer: Austin Rovge
 * Date: 2/10/2019
 */

#include "HuffmanLeaf.h"
#include "HuffmanNode.h"
#include "HuffmanUtilities.h"
#include <iostream>
#include <fstream>
#include <sstream>

// helper function prototypes
std::string readFile(std::string);

int main() {
    // read file
    std::string str = readFile("file.in");

    // get character frequencies for the entire file
    std::vector<int> frequencies = HuffmanUtilities::calculateFrequencies(str);

    // build the HuffmanTree
    HuffmanTree *tree = HuffmanUtilities::buildTree(frequencies);

    std::cout << "Tree frequency: ";
    std::cout << tree->getFrequency() << std::endl;

    return 0;
}

/**
 * This is a helper method for reading in the entire user selected file.
 * @param filename std::string of the name of the file in the root directory
 * @return std::string of the entire file contents
 */
std::string readFile(std::string filename) {

    // the buffer will return "" if the file doesn't exist so it doesn't need to be valid
    std::ifstream file("../" + filename);
    std::stringstream buffer;
    buffer << file.rdbuf();
    return buffer.str();
}