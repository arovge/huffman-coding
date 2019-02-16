/*
 * Project: huffman-coding
 * Developer: Austin Rovge
 * Date: 2/10/2019
 */

#include <iostream>
#include <fstream>
#include <sstream>
#include "HuffmanLeaf.h"
#include "HuffmanNode.h"
#include "HuffmanUtilities.h"

// helper function prototypes
std::string readFile(std::string);

int main() {
//    HuffmanLeaf leaf = HuffmanLeaf(5, 'a');
//    std::cout << "The character for this HuffmanLeaf is: " << leaf.getCharacter() << std::endl;
//    std::cout << "Its frequency is: " << leaf.getFrequency() << std::endl;
//
//    HuffmanNode node = HuffmanNode(leaf, HuffmanNode(HuffmanLeaf(3, 'a'), HuffmanLeaf(25, 'b')));

    // expected 33 = 3 + 5 + 25
//    std::cout << "The frequency for this HuffmanNode is: " << node.getFrequency() << std::endl;

//    std::cout << std::endl;

    // read file
    std::string str = readFile("file.in");

    std::vector<int> vector = HuffmanUtilities::calculateFrequencies(str);

    for (int i = 0; i < vector.size(); i++ ) {
        std::cout << vector[i] << std::endl;
    }

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