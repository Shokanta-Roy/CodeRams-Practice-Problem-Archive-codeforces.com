#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    string equation;
    getline(cin, equation);

    stringstream ss(equation);
    int result = 0;
    char op;
    ss >> result; // Initialize result with first number

    while (ss >> op)
    {
        if (op == '=')
        {
            break; // Exit the loop when '=' is encountered
        }
        int num;
        ss >> num;
        if (op == '+')
        {
            result += num;
        }
        else if (op == '-')
        {
            result -= num;
        }
    }

    cout << equation<<" "<< result << endl;

    return 0;
}
