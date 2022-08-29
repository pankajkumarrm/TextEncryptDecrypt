#include "CreateCharToBinaryMap.h"
#include "CreateCharToCharCountMap.h"
unordered_map<char, string> CreatingBinaryFile(string input, string output)
{
    unordered_map<char, int> CharToCharCount = CreatingCharToCharCountMap(input);
    string CurrLineInput;
    ifstream InputFile(input);
    unordered_map<char, string> charCode = CreatingCharToBinaryMap(CharToCharCount);
    ofstream OutputFile(output, ios::app);
    while (getline(InputFile, CurrLineInput))
    {
        for (int i = 0; i < CurrLineInput.size(); i++)
        {
            OutputFile << charCode[CurrLineInput[i]];
        }
        OutputFile << endl;
    }
    InputFile.close();
    OutputFile.close();
    return charCode;
}