/*
 * Project: huffman-coding
 * Developer: Austin Rovge
 * Date: 2/10/2019
 */

#include "HuffmanTree.h"

/**
 * Creates a new HuffmanTree with a given frequency.
 * @param frequency
 */
HuffmanTree::HuffmanTree(int frequency) {
    this->frequency = frequency;
}

/**
 * This method is used for comparing two HuffmanTrees by comparing their frequencies.
 * @param tree the other HuffmanTree object being compared.
 * @return 0 if the trees have the same frequency, a positive integer if the current
 *              tree has the larger frequency, or a negative integer if the other tree
 *              has the larger frequency.
 */
int HuffmanTree::compareTo(HuffmanTree tree) {
    return this->frequency - tree.getFrequency();
}

/**
 * This is a getter for the HuffmanTrees frequency.
 * @return the character frequency of this HuffmanTree.
 */
int HuffmanTree::getFrequency() {
    return this->frequency;
}
