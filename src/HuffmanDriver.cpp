/*
 * Project: huffman-coding
 * Developer: Austin Rovge
 * Date: 2/10/2019
 */

#include <iostream>
#include <fstream>
#include "HuffmanLeaf.h"
#include "HuffmanNode.h"

void readFile();

int main() {
    HuffmanLeaf leaf = HuffmanLeaf(5, 'a');
    std::cout << "The character for this HuffmanLeaf is " << leaf.getCharacter() << "." << std::endl;
    std::cout << "It occurs " << leaf.getFrequency() << " times." << std::endl;


    HuffmanNode node = HuffmanNode(leaf, HuffmanNode(HuffmanLeaf(3, 'a'), HuffmanLeaf(25, 'b')));

    // expected 33 = 3 + 5 + 25
    std::cout << "The frequency for this HuffmanNode is: " << node.getFrequency() << std::endl;

    std::cout << std::endl;

    // read file
    readFile();

    return 0;
}

void readFile() {
    std::ifstream file;
    file.open("../src/original.txt");

    std::string line;

    if (file.is_open()) {
        while (getline(file, line)) {
            std::cout << line << std::endl;
        }
        file.close();
    } else {
        std::cout << "Unable to open file" << std::endl;
    }
}