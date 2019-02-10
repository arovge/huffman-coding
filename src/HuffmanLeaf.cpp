/*
 * Project: huffman-coding
 * Developer: Austin Rovge
 * Date: 2/10/2019
 */

#include "HuffmanLeaf.h"

/**
 * This is a constructor for a HuffmanLeaf. It passes its frequency into
 * its parent HuffmanTree constructor.
 * @param frequency the frequency the character value occurs.
 * @param value the character value of this HuffmanLeaf.
 */
HuffmanLeaf::HuffmanLeaf(int frequency, char value) : HuffmanTree(frequency) {
    this->value = value;
}

/**
 * This method returns the character stored by this HuffmanLeaf.
 * @return char value stored by the HuffmanLeaf.
 */
char HuffmanLeaf::getCharacter() {
    return this->value;
}
