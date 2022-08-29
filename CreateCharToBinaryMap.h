#include "CreateHuffmanTree.h"
unordered_map<char, string> getBits(HuffmanTreeNode *head)
{
    unordered_map<char, string> smallAns;
    if (head->left->left == NULL && head->left->right == NULL)
    {
        if (head->left->c != '+')
        {
            smallAns[head->left->c] = "0";
        }
    }
    else
    {
        unordered_map<char, string> left = getBits(head->left);
        unordered_map<char, string>::iterator itr = left.begin();
        while (itr != left.end())
        {
            smallAns[itr->first] = "0" + itr->second;
            itr++;
        }
    }
    if (head->right->left == NULL && head->right->right == NULL)
    {
        if (head->right->c != '+')
        {
            smallAns[head->right->c] = "1";
        }
    }
    else
    {
        unordered_map<char, string> right = getBits(head->right);
        unordered_map<char, string>::iterator itr = right.begin();
        while (itr != right.end())
        {
            smallAns[itr->first] = "1" + itr->second;
            itr++;
        }
    }
    return smallAns;
}
unordered_map<char, string> CreatingCharToBinaryMap(unordered_map<char, int> charToCharCountMap)
{
    unordered_map<char, int>::iterator itr = charToCharCountMap.begin();
    priority_queue<pair<int, HuffmanTreeNode *>, vector<pair<int, HuffmanTreeNode *>>, greater<pair<int, HuffmanTreeNode *>>> pq;
    while (itr != charToCharCountMap.end())
    {
        char curr = itr->first;
        int freq = itr->second;
        itr++;
        HuffmanTreeNode *charNode = new HuffmanTreeNode(curr, freq);
        pq.push({freq, charNode});
    }
    HuffmanTreeNode *Head = CreatingHuffmanTree(pq);
    return getBits(Head);
}