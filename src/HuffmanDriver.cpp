/*
 * Project: huffman-coding
 * Developer: Austin Rovge
 * Date: 2/10/2019
 */

#include <iostream>
#include <fstream>
#include "HuffmanLeaf.h"
#include "HuffmanNode.h"
#include "HuffmanUtilities.h"

void readFile();

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
    readFile();

    return 0;
}

void readFile() {
    std::ifstream file;
    file.open("../src/original.txt");

    std::string line;
    HuffmanUtilities util;

    if (file.is_open()) {
        while (getline(file, line)) {
            std::vector<int> vector = util.calculateFrequencies(line);

            for (int i = 0; i < vector.size(); i++) {
                std::cout << (char) i;
                std::cout << " frequency is: ";
                std:: cout << vector[i] << std::endl;
            }
        }
        file.close();
    } else {
        std::cout << "Unable to open file" << std::endl;
    }
}