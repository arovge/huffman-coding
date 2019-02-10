/*
 * Project: huffman-coding
 * Developer: Austin Rovge
 * Date: 2/10/2019
 */

#include "HuffmanTree.h"

#ifndef HUFFMAN_CODING_HUFFMANNODE_H
#define HUFFMAN_CODING_HUFFMANNODE_H

/**
 * HuffmanNode class. This object is a child of the HuffmanTree.
 */
class HuffmanNode : public HuffmanTree {
public:

    /**
     * Constructor for the HuffmanNode. It has a reference to its two subtrees.
     * @param left HuffmanTree object, either a leaf or a node, on the left subtree.
     * @param right HuffmanTree object, either a leaf or a node, on the right subtree.
     */
    HuffmanNode(HuffmanTree left, HuffmanTree right);

private:

    /** This is a reference to the left subtree. It is either a HuffmanLeaf or HuffmanNode. */
    HuffmanTree left;

    /** This is a reference to the right subtree. It is either a HuffmanLeaf or HuffmanNode. */
    HuffmanTree right;
};


#endif // HUFFMAN_CODING_HUFFMANNODE_H
