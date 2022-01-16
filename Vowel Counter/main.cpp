#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    typedef enum
    {
        A = 'a', E = 'e', I = 'i', O = 'o', U = 'u', SPACE = ' '
    } vowels;

    int vowelAmount = 0;
    int vowelPercent = 0;
    int wordAmount = 0;
    string text;

    cout << "Enter some text:   ";
    getline(cin, text);
    if (text.size() >= 1 && text[0] != vowels(SPACE))
    {
        wordAmount = 1;
    }
    cout << "Vowels used:       ";

    for (unsigned int i = 0; i < text.size(); i++)
    {
        if (text[i] == vowels(A))
        {
            vowelAmount++;
            cout << 'a';
        }
        else if (text[i] == vowels(E))
        {
            vowelAmount++;
            cout << 'e';
        }
        else if (text[i] == vowels(I))
        {
            vowelAmount++;
            cout << 'i';
        }
        else if (text[i] == vowels(O))
        {
            vowelAmount++;
            cout << 'o';
        }
        else if (text[i] == vowels(U))
        {
            vowelAmount++;
            cout << 'u';
        }
        else if (text[i] == vowels(SPACE) && text[i+1] != vowels(SPACE))
        {
            wordAmount++;
        }
    }
    vowelPercent = (100 * vowelAmount / text.size());
    cout << endl << "# of words: " << wordAmount;
    cout << endl << "# of letters used: " << text.size();
    cout << endl << vowelPercent << "% of letters were vowels";
    if (vowelAmount <= 1)
    {
        cout << "\nThere was one vowel in that sentence." << endl;
    }
    else
        cout << "\nThere were " << vowelAmount << " vowels in that sentence." << endl;

    system("PAUSE");
    return 0;
}

// 1 for loop, check for space, if string[x] == 'space' && string[x]+1 != 'space'{ cout blah blah }
