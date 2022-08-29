#include <bits\stdc++.h>
using namespace std;
void CreatingDecodingFile(unordered_map<char, string> charToBinaryMap, string decoding)
{
    unordered_map<char, string>::iterator itr = charToBinaryMap.begin();
    ofstream decodingFile(decoding);
    while (itr != charToBinaryMap.end())
    {
        decodingFile << itr->second << endl
                     << itr->first << endl;
        itr++;
    }
    decodingFile.close();
}