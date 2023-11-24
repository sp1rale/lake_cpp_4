#include <iostream>

using namespace std;

void insertCharAtPosition(string& str, char charToInsert, int position) {
	str.insert(position, 1, charToInsert);
}


int main()
{
    string inputString;
    char charToInsert;
    int positionToInsert;

    cout << "Enter a string: ";
    cin >> inputString;

    cout << "Enter the character to insert: ";
    cin >> charToInsert;

    cout << "Enter the position to insert: ";
    cin >> positionToInsert;

    insertCharAtPosition(inputString, charToInsert, positionToInsert);

    cout << "Result: " << inputString << endl;

	return 0;
}
