#include <iostream>
#include <string>

using namespace std;

void replaceDotsWithExclamation(string& str) {
    size_t found = str.find('.');
    while (found != string::npos) {
        str.replace(found, 1, "!");
        found = str.find('.', found + 1);
    }
}

int main()
{
    string userInput;

    cout << "Enter a string: ";
    cin >> userInput;

    replaceDotsWithExclamation(userInput);

    cout << "Result: " << userInput << endl;

	return 0;
}
