#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    getline(cin, input);

    string modifiedString;

    for (char ch : input)
    {
        if (ch == 'h')
        {
            modifiedString += string(5, ch);
        }
        else if (ch == 'c')
        {
            modifiedString += string(2, ch);
        }
        else if (ch == 'z')
        {
            modifiedString += string(12, ch);
        }
        else
        {
            modifiedString.push_back(ch);
        }
    }

    cout << modifiedString << endl;

    return 0;
}
