/*
 * Project: huffman-coding
 * Developer: Austin Rovge
 * Date: 2/10/2019
 */

#include <iostream>
#include "HuffmanLeaf.h"
#include "HuffmanNode.h"

int main() {
    HuffmanLeaf leaf = HuffmanLeaf(5, 'a');
    std::cout << "The character for this HuffmanLeaf is " << leaf.getCharacter() << "." << std::endl;
    std::cout << "It occurs " << leaf.getFrequency() << " times." << std::endl;

    return 0;
}
