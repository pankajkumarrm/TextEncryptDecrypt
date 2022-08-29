#include "CreateBinaryToCharMap.h"
using namespace std;
void CreatingDecodedOutput(string input, string output, string decoding)
{

    unordered_map<string, char> BinaryMap = CreatingBinaryToCharMap(decoding);
    string CurrLine;
    ifstream InputFile(input);
    ofstream OutputFile(output);
    while (getline(InputFile, CurrLine))
    {
        string currBin = "";
        string currOutput = "";
        for (int i = 0; i < CurrLine.size(); i++)
        {
            currBin += CurrLine[i];
            if (BinaryMap.count(currBin) != 0)
            {
                currOutput = currOutput + BinaryMap[currBin];
                currBin = "";
            }
        }
        OutputFile << currOutput << endl;
    }
}