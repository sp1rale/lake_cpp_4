#include <iostream>

using namespace std;

void removeCharAtIndex(string& str, int index) {
    if (index >= 0 && index < str.length()) {
        str.erase(index, 1);
    }
}

int main()
{
    string inputString;
    int indexToRemove;

    cout << "Enter a word: ";
    cin >> inputString;

    cout << "Enter the index of the character to remove: ";
    cin >> indexToRemove;

    removeCharAtIndex(inputString, indexToRemove);

    cout << "Result: " << inputString << endl;

	return 0;
}
