#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    cin.ignore();
    for (int t = 0; t < T; ++t)
    {
        string line;
        getline(cin, line);

        istringstream iss(line);
        string number;

        while (iss >> number)
        {
            for (char digit : number)
            {
                char decoded;
                switch (digit)
                {
                case '0':
                    decoded = 'o';
                    break;
                case '1':
                    decoded = 'i';
                    break;
                case '3':
                    decoded = 'e';
                    break;
                case '4':
                    decoded = 'a';
                    break;
                case '5':
                    decoded = 's';
                    break;
                case '7':
                    decoded = 't';
                    break;
                default:
                    decoded = digit;
                    break;
                }
                cout << decoded;
            }
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}
