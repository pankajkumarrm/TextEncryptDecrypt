#include <bits/stdc++.h>
using namespace std;
unordered_map<string, char> CreatingBinaryToCharMap(string Decoding)
{
    unordered_map<string, char> BinaryToCharMap;
    ifstream inputFile(Decoding);
    string CurrLine;
    string binary;
    int i = 0;
    while (getline(inputFile, CurrLine))
    {
        if (i % 2 == 0)
        {
            if (CurrLine == "")
            {
                break;
            }
            binary = CurrLine;
        }
        else
        {
            BinaryToCharMap[binary] = CurrLine[0];
        }
        i++;
    }
    return BinaryToCharMap;
}