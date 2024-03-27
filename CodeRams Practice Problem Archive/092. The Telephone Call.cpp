#include <iostream>
#include <string>

using namespace std;

int main()
{
    string number;
    cin >> number;

    long long int possibleNumbers = 1;
    for (int i = 0; i < number.length(); ++i)
    {
        char digit = number[i];
        if (digit == 'x')
        {
            possibleNumbers *= 10LL;
        }
    }

    cout << possibleNumbers << endl;

    return 0;
}
