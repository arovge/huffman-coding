# makefile for huffman-coding

a.out: leaf.o node.o tree.o util.o
	g++ -std=c++17 -Wall leaf.o node.o tree.o util.o

leaf.o: HuffmanLeaf.cpp HuffmanLeaf.h HuffmanTree.h
	g++ -c -std=c++17 -Wall HuffmanLeaf.cpp

node.o: HuffmanNode.cpp HuffmanNode.h HuffmanTree.h
	g++ -c -std=c++17 -Wall HuffmanNode.cpp

tree.o: HuffmanTree.cpp HuffmanTree.h
	g++ -c -std=c++17 -Wall HuffmanTree.cpp

util.o: HuffmanUtilities.cpp HuffmanUtilities.h HuffmanTree.h HuffmanNode.h HuffmanLeaf.h
	g++ -c -std=c++17 -Wall HuffmanUtilities.cpp

clean:
	rm -f *.out a.out a.exe