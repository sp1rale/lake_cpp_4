#include <iostream>

using namespace std;

void removeCharOccurrences(string& str, char targetChar) {
	str.erase(remove(str.begin(), str.end(), targetChar), str.end());
}

int main()
{
    string inputString;
    char charToRemove;

    cout << "Enter a string: ";
    cin >> inputString;

    cout << "Enter the character to remove: ";
    cin >> charToRemove;

    removeCharOccurrences(inputString, charToRemove);

    cout << "Result: " << inputString << endl;

	return 0;
}
