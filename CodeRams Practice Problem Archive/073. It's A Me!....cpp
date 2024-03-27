#include <iostream>
#include <string>

using namespace std;

int main()
{
    string statement;
    getline(cin, statement);
    statement += " Mario!";
    cout << statement << endl;
    return 0;
}
