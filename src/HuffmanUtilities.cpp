/*
 * Project: huffman-coding
 * Developer: Austin Rovge
 * Date: 2/10/2019
 */

#include "HuffmanUtilities.h"
#include "HuffmanLeaf.h"
#include "HuffmanNode.h"
#include <queue>
#include <string>
#include <unordered_map>

/**
 * This method loops through a string and increments the character frequency
 * of a std::vector for number of characters present in that line of the string.
 * @param input std::string to parse through
 * @return std::vector<int> of size 256 with the character frequencies for the string.
 */
std::vector<int> HuffmanUtilities::calculateFrequencies(std::string input) {
    // initialize a vector of size 256 to 0
    std::vector<int> frequencies(HuffmanUtilities::ASCII_VALUES);

    // increment the char value for that line in its corresponding place in the vector
    for (int i = 0; i < input.length(); i++) {
        char c = input[i];
        frequencies[c]++;
    }

    return frequencies;
}

/**
 *
 * @param frequencies vector<int> of the character frequencies in the file
 * @return a HuffmanTree built containing HuffmanNodes and HuffmanLeafs
 */
HuffmanTree* HuffmanUtilities::buildTree(std::vector<int> frequencies) {
    std::priority_queue<HuffmanTree*> queue;

    // loop through each value in the frequency vector
    for (int i = 0; i < HuffmanUtilities::ASCII_VALUES; i++) {

        // if the frequency is greater than 0, add a HuffmanLeaf to the queue
        if (frequencies[i] > 0) {
            HuffmanLeaf* leaf = new HuffmanLeaf(frequencies[i], (char) i);
            queue.push(leaf);
        }
    }

    // continue popping Huffman Nodes/Leafs off of the queue until one object is left
    while (queue.size() > 1) {

        // HuffmanTree object for a left child
        HuffmanTree* left = queue.top();
        queue.pop();

        // HuffmanTree object for a right child
        HuffmanTree* right = queue.top();
        queue.pop();

        HuffmanNode* node = new HuffmanNode(left, right);

        queue.push(node);
    }

    // return the constructed HuffmanTree
    return queue.top();
}

void HuffmanUtilities::printCodes(HuffmanTree* tree) {

}

void HuffmanUtilities::buildTable(HuffmanTree* tree, std::string str) {

}

void HuffmanUtilities::processLeaf(HuffmanLeaf leaf, std::string str) {
    std::pair<char, std::string> pair(leaf.getCharacter(), str);
    HuffmanUtilities::map.insert(pair);
}