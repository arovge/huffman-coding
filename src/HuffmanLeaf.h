/*
 * Project: huffman-coding
 * Developer: Austin Rovge
 * Date: 2/10/2019
 */

#include "HuffmanTree.h"

#ifndef HUFFMAN_CODING_HUFFMANLEAF_H
#define HUFFMAN_CODING_HUFFMANLEAF_H

/**
 * This is a HuffmanLeaf class. It is a child of the HuffmanTree class.
 * It is a leaf on the HuffmanTree, it does not have any references
 * to any other HuffmanNodes.
 */
class HuffmanLeaf : public HuffmanTree {
public:

    /**
     * HuffmanLeaf constructor.
     * @param frequency the frequency the character occurs, passed to parent constructor.
     * @param value the character the HuffmanLeaf represents.
     */
    HuffmanLeaf(int frequency, char value);

    /**
     * This method will return the character value for this Huffmanleaf.
     * @return char for the HuffmanLeaf.
     */
    char getCharacter();

    /**
     * Used to determine if the object is a leaf or a node.
     * @return true if a leaf, false if a node
     */
    virtual bool isLeaf();

private:

    /** This is the character value for the HuffmanLeaf. Unique to each HuffmanLeaf. */
    char value;
};


#endif // HUFFMAN_CODING_HUFFMANLEAF_H
