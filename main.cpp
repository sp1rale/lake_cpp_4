#include <iostream>
#include <string>
using namespace std;

void countCharacters(const string& str, int& letterCount, int& digitCount, int& otherCount) {
    for (char ch : str) {
        if (isalpha(ch)) {
            letterCount++;
        }
        else if (isdigit(ch)) {
            digitCount++;
        }
        else {
            otherCount++;
        }
    }
}

int main()
{
    string userInput;
    int letterCount = 0, digitCount = 0, otherCount = 0;

    cout << "Enter a string: ";
    cin >> userInput;

    countCharacters(userInput, letterCount, digitCount, otherCount);

    cout << "Letters: " << letterCount << endl;
    cout << "Digits: " << digitCount << endl;
    cout << "Other characters: " << otherCount << endl;

	return 0;
}
