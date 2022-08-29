#include "CreateBinaryFile.h"
#include "CreateDecodedOuput.h"
#include "CreateDecodingFile.h"
using namespace std;
int main()
{
    int choice = 0;
    while (true)
    {
        cout << "What you want to do:: " << endl;
        cout << "1.Enter 1 to encrypt your file." << endl;
        cout << "2.Enter 2 to decrypt the file." << endl;
        cout << "3.Enter 3 to exist." << endl;
        cin >> choice;
        string input, output, decoding;
        if (choice == 1)
        {
            cout << "Name of the Input text file: ";
            cin >> input;
            cout << "Name of the output Binary file: ";
            cin >> output;
            cout << "Name of the decoding file: ";
            cin >> decoding;
            unordered_map<char, string> charToBinaryCode = CreatingBinaryFile(input, output);
            CreatingDecodingFile(charToBinaryCode, decoding);
        }
        else if (choice == 2)
        {
            cout << "Name of the Input Binary file: ";
            cin >> input;
            cout << "Name of the output text file: ";
            cin >> output;
            cout << "Name of the decoding file: ";
            cin >> decoding;
            CreatingDecodedOutput(input, output, decoding);
        }
        else if (choice == 3)
        {
            break;
        }
        else
        {
            cout << "Wrong Input! Try again" << endl;
        }
    }
    return 0;
}