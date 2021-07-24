// Program for Huffman Coding using Priority Queue
#ifndef HUFFMAN_H
#define HUFFMAN_H
#include <iostream>
#include <queue>
using namespace std;

// Maximum Height of Huffman Tree.
#define MAX_SIZE 100

class HuffmanTreeNode
{
public:
    char data; // Stores character
    int freq; // Stores frequency of the character

    // Left child of the current node
    HuffmanTreeNode *left;

    // Right child of the current node
    HuffmanTreeNode *right;

    // Constructor
    HuffmanTreeNode(char character, int frequency)
    {
        data = character;
        freq = frequency;
        left = right = NULL;
    }
};

// Custom comparator class
class Compare
{
public:
    bool operator()(HuffmanTreeNode *a, HuffmanTreeNode *b)
    {
        // Defining priority on the basis of frequency
        return a->freq > b->freq;
    }
};

// Function to generate Huffman Encoding Tree
HuffmanTreeNode *buildTree(priority_queue<HuffmanTreeNode *, vector<HuffmanTreeNode *>, Compare> pq)
{

    /*looping till only one node remains in the Priority Queue
    
        - set left node which has least frequency
        - remove node from Priority Queue

        - set right node which has least frequency
        - remove node from Priority Queue
       
        - formed a new node with frequency left->freq + right->freq
        - ake data as '$' because it only concerned with the frequency

        -Push back new node to the Priority Queue
    */

    // Write your code here!








}

// display code of each character.
void displayCodes(HuffmanTreeNode *root, int arr[], int top)
{
    /* 
    - assign 0 to the left node and perform recursion
    - assign 1 to the right node and perform recursion
    - If this is a leaf node,then we print root->data
    */
    
    // Write your code here!








}

void HuffmanCodes(char data[],int freq[], int size)
{

    /* 
    - Declare priority queue using custom comparator
    - Populate the priority queue
    - Build Huffman Encoding Tree and get the root node
    - Display Huffman Codes
    */

    // Write your code here!









    
}

#endif