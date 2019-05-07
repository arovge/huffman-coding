/*
 * Project: huffman-coding
 * Developer: Austin Rovge
 * Date: 2/10/2019
 */

#include "HuffmanNode.h"

/**
 * Constructor for a HuffmanNode. It calls its parent HuffmanTree constructor and
 * passes in the sum of its left and right HuffmanTree frequency values.
 * @param left HuffmanTree object (leaf or node) on the left subtree.
 * @param right HuffmanTree object (leaf or node) on the right subtree.
 */
HuffmanNode::HuffmanNode(HuffmanTree* left, HuffmanTree* right) : HuffmanTree(left->getFrequency() + right->getFrequency()) {
    this->left = left;
    this->right = right;
}

/**
 * Used to determine if the object is a leaf or a node.
 * @return true if a leaf, false if a node
 */
bool HuffmanNode::isLeaf() {
    return false;
}

HuffmanTree* HuffmanNode::getLeftTree() {
    return this->left;
}

HuffmanTree* HuffmanNode::getRightTree(){
    return this->right;
}