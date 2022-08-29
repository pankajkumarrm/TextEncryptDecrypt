#include "HuffmanTreeNode.h"
HuffmanTreeNode *CreatingHuffmanTree(priority_queue<pair<int, HuffmanTreeNode *>, vector<pair<int, HuffmanTreeNode *>>, greater<pair<int, HuffmanTreeNode *>>> pq)
{
    char next = '+';
    while (pq.size() > 1)
    {
        pair<int, HuffmanTreeNode *> temp;
        temp = pq.top();
        int firstFreq = temp.first;
        HuffmanTreeNode *firstNode = temp.second;
        pq.pop();
        temp = pq.top();
        int secondFreq = temp.first;
        HuffmanTreeNode *secondNode = temp.second;
        pq.pop();
        HuffmanTreeNode *curr = new HuffmanTreeNode(next, firstFreq + secondFreq);
        curr->left = firstNode;
        curr->right = secondNode;
        pq.push({curr->freq, curr});
    }
    return pq.top().second;
}