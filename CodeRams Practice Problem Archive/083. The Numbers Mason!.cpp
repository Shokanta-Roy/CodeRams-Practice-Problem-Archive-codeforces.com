#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    string input;
    getline(cin, input);

    istringstream iss(input);
    string octalStr;
    while (iss >> octalStr)
    {
        int decimalValue = stoi(octalStr, nullptr, 8);
        char character = static_cast<char>(decimalValue);
        cout << character;
    }

    return 0;
}
