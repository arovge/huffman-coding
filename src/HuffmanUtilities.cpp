/*
 * Project: huffman-coding
 * Developer: Austin Rovge
 * Date: 2/10/2019
 */

#include <iostream>
#include "HuffmanUtilities.h"

/**
 * This method loops through a string and increments the character frequency
 * of a std::vector for number of characters present in that line of the string.
 * @param input std::string to parse through
 * @return std::vector<int> of size 256 with the character frequencies for the string.
 */
std::vector<int> HuffmanUtilities::calculateFrequencies(std::string input) {
    // initialize a vector of size 256 to 0
    std::vector<int> vector(HuffmanUtilities::ASCII_VALUES);

    // increment the char value for that line in its corresponding place in the vector
    for (int i = 0; i < input.length(); i++) {
        char c = input[i];
        vector[c]++;
    }

    return vector;
}