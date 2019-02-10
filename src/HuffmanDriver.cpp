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


    HuffmanNode node = HuffmanNode(leaf, HuffmanNode(HuffmanLeaf(3, 'a'), HuffmanLeaf(25, 'b')));

    // expected 33 = 3 + 5 + 25
    std::cout << "The frequency for this HuffmanNode is: " << node.getFrequency() << std::endl;

    return 0;
}
