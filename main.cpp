#include <iostream>
#include <string>

using namespace std;

int countOccurrences(const string& str, char targetChar) 
{
    int count = 0;
    for (char ch : str) {
        if (ch == targetChar) {
            count++;
        }
    }
    return count;
}

int main()
{
    string userInput;
    char targetCharacter;

    cout << "Enter a string: ";
    cin >> userInput;

    cout << "Enter the character to count: ";
    cin >> targetCharacter;

    int occurrences = countOccurrences(userInput, targetCharacter);

    cout << "The character '" << targetCharacter << "' occurs " << occurrences << " times in the string." << endl;

	return 0;
}
