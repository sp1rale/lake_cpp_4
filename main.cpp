#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    string sentence;
    cout << "Enter a string: ";
    cin >> sentence;

    int wordCount = 0;

    for (char ch : sentence) {
        if (isspace(ch) || ispunct(ch)) {
            wordCount++;
        }
    }

    if (!sentence.empty()) {
        wordCount++;
    }
 
    cout << "Number of words: " << wordCount << endl;

	return 0;
}
