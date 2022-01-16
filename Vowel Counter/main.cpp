// Vowel Counter, by Kelvin Benavides

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
	// enum for parsing the string, including vowels and a space
    typedef enum
    {
        A = 'a', E = 'e', I = 'i', O = 'o', U = 'u', SPACE = ' '
    } vowels;

    int vowelAmount = 0;
    int vowelPercent = 0;
    int wordAmount = 0;
    string text;

	// Prompt the user for input
    cout << "Enter some text:   ";
    getline(cin, text);
	// If the input is atleast 1 character long and not a space
    if (text.size() >= 1 && text[0] != vowels(SPACE))
    {
        wordAmount = 1;
    }

	// Output the vowels in the string
    cout << "Vowels used:       ";
	// Go through each character in text
	// If the character is a vowel, print it to the console
    for (unsigned int i = 0; i < text.size(); i++)
    {
        if (text[i] == vowels(A)) // If 'A'
        {
            vowelAmount++;
            cout << 'a';
        }
        else if (text[i] == vowels(E)) // If 'E'
        {
            vowelAmount++;
            cout << 'e';
        }
        else if (text[i] == vowels(I)) // If 'I'
        {
            vowelAmount++;
            cout << 'i';
        }
        else if (text[i] == vowels(O)) // If 'O'
        {
            vowelAmount++;
            cout << 'o';
        }
        else if (text[i] == vowels(U)) // If 'U'
        {
            vowelAmount++;
            cout << 'u';
        }
		// If the current character is a space, and the next is not,
		// increase the word counter
        else if (text[i] == vowels(SPACE) && text[i+1] != vowels(SPACE))
        {
            wordAmount++;
        }
    }
    vowelPercent = (100 * vowelAmount / text.size());
	// Output some statistics
    cout << endl << "# of words: " << wordAmount;
    cout << endl << "# of letters used: " << text.size();
    cout << endl << vowelPercent << "% of letters were vowels";
    if (vowelAmount <= 1)
    {
        cout << "\nThere was one vowel in that sentence." << endl;
    }
    else
        cout << "\nThere were " << vowelAmount << " vowels in that sentence." << endl;

    system("PAUSE"); // Pause the program to allow the user to see output
    return 0;
}
