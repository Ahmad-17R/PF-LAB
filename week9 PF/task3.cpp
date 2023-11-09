#include <iostream>
using namespace std;
void shifting(string wordData);

main()
{
    string wordData;
    cout << "Enter a String: ";
    getline(cin, wordData);
    shifting(wordData);
}
void shifting(string wordData)
{
    cout << "Shifted String: ";
    for (int i = 0; wordData[i] != '\0'; i++)
    {
        if (wordData[i] != ' ')
        {
            char character = wordData[i];
            if (character == 'Z')
            {
                cout << "A";
            }
            else if(character=='z'){
                cout<<"a";
            }
            else
            {
                int asciicode = character;
                asciicode++;
                character = asciicode;
                cout << character;
            }
        }
        else
        {
            cout << " ";
        }
    }
}
