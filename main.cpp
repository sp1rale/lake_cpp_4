#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str = "This is a string with spaces";


    replace(str.begin(), str.end(), ' ', '\t');

  
    cout << "Result: " << str << endl;

	return 0;
}
