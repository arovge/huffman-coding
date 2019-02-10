/*
 * Project: huffman-coding
 * Developer: Austin Rovge
 * Date: 2/10/2019
 */

#include <iostream>
#include "HuffmanTree.h"

int main() {
    HuffmanTree tree = HuffmanTree(5);
    std::cout << tree.getFrequency() << std::endl;

    return 0;
}
