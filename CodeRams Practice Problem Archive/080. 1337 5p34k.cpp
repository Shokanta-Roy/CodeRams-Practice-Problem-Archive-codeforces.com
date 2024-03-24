#include <iostream>
#include <string>

using namespace std;

string toLeetSpeak(const string& text)
{
    string leetText = "";
    for (char ch : text)
    {
        switch (ch)
        {
        case 'a':
            leetText += '4';
            break;
        case 'b':
            leetText += '8';
            break;
        case 'e':
            leetText += '3';
            break;
        case 'i':
            leetText += '1';
            break;
        case 'l':
            leetText += '1';
            break;
        case 'o':
            leetText += '0';
            break;
        case 's':
            leetText += '5';
            break;
        case 't':
            leetText += '7';
            break;
        case 'z':
            leetText += '2';
            break;
        default:
            leetText += ch;
            break;
        }
    }
    return leetText;
}

int main()
{
    string input;
    getline(cin, input);

    cout << toLeetSpeak(input) << endl;

    return 0;
}
