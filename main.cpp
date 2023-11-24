#include <iostream>


using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int letters = 0;
    int digits = 0;
    int others = 0;

    for (char ch : str) {
        if (isalpha(ch)) {
            letters++;
        }
        else if (isdigit(ch)) {
            digits++;
        }
        else {
            others++;
        }
    }

   
    cout << "Letters: " << letters << endl;
    cout << "Digits: " << digits << endl;
    cout << "Other characters: " << others << endl;

	return 0;
}
