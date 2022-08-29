#include <bits/stdc++.h>
using namespace std;
class HuffmanTreeNode
{
public:
    char c;
    int freq;
    HuffmanTreeNode *left;
    HuffmanTreeNode *right;
    HuffmanTreeNode(char c, int freq)
    {
        this->c = c;
        this->freq = freq;
        left = NULL;
        right = NULL;
    }
};
