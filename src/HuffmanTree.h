/*
 * Project: huffman-coding
 * Developer: Austin Rovge
 * Date: 2/10/2019
 */

#ifndef HUFFMAN_CODING_HUFFMANTREE_H
#define HUFFMAN_CODING_HUFFMANTREE_H

/**
 * Class that defines a HuffmanTree.
 */
class HuffmanTree {
public:

    /**
     * HuffmanTree construction
     * @param frequency for the HuffmanTree.
     */
    HuffmanTree(int frequency);

    /**
     * Comparison method to compare a HuffmanTree against another HuffmanTree.
     * @param tree HuffmanTree to compare against.
     * @return an integer based on the comparison.
     */
    int compareTo(HuffmanTree tree);

    /**
     * A getter method for the frequency of the HuffmanTree.
     * @return an integer for the frequency of the HuffmanTree.
     */
    int getFrequency();

private:
    /** This is the frequency of the character for the HuffmanTree. */
    int frequency;
};

#endif // HUFFMAN_CODING_HUFFMANTREE_H
