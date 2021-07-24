#include <iostream>
#include "huffman.h"
int main()
{
    char data[] = {'u', 'v', 'w', 'x', 'y', 'z'};
    int freq[] = {7, 11, 13, 15, 18, 52};
    int size = sizeof(data) / sizeof(data[0]);
    HuffmanCodes(data, freq, size);
    return 0;
}