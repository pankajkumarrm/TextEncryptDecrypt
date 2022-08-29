#include <bits\stdc++.h>
using namespace std;
void helper(string currLine, unordered_map<char, int> &charMap)
{
    for (int i = 0; i < currLine.size(); i++)
        charMap[currLine[i]]++;
}
unordered_map<char, int> CreatingCharToCharCountMap(string input)
{
    string currLine;
    ifstream MyReadFile(input);
    unordered_map<char, int> charToCharCountMap;
    while (getline(MyReadFile, currLine))
    {
        helper(currLine, charToCharCountMap);
    }
    MyReadFile.close();
    return charToCharCountMap;
}
// 6 a 5 b 9 c 12 d 13 e 16 f 45