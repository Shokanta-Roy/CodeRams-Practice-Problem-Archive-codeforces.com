#include <iostream>
#include <cctype> // For toupper and tolower functions

using namespace std;

int main()
{
    string inputString;
    getline(cin, inputString);

    for (char& c : inputString)
    {
        if (islower(c))
        {
            c = toupper(c);
        }
        else
        {
            c = tolower(c);
        }
    }

    cout << inputString << endl;

    return 0;
}
