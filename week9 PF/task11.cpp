#include <iostream>
using namespace std;
void subtract(string);

main()
{
    string sub;
    cout << "Enter a string: ";
    getline(cin, sub);
    subtract(sub);
}
void subtract(string sub)
{
    cout << "String with vowels removed: ";
    for (int i = 0; sub[i] != '\0'; i++)
    {
        if (sub[i] != ' ')
        {
            if (sub[i] != 'a' && sub[i] != 'e' && sub[i] != 'i' && sub[i] != 'o' && sub[i] != 'u')
            {
                cout << sub[i];
            }
        }
        else
        {
            cout << " ";
        }
    }
}
