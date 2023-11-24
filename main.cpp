#include <iostream>

using namespace std;

bool isPalindrome(const string& str) {
    int i = 0;
    int j = str.length() - 1;

    while (i < j) {

        while (i < j && !isalnum(str[i])) {
            i++;
        }
        while (i < j && !isalnum(str[j])) {
            j--;
        }

        if (tolower(str[i]) != tolower(str[j])) {
            return false;
        }

        i++;
        j--;
    }

    return true;
}


int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;

    if (isPalindrome(str)) {
        cout << "A string is a palindrome." << endl;
    }
    else {
        cout << "A string is a not palindrome." << endl;
    }


	return 0;
}
