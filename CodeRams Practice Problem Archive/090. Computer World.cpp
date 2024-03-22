#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>


using namespace std;

int main()
{
    string storage;
    cin >> storage;

    // Extracting the numeric value from the input string
    int space = stoi(storage.substr(0, storage.size() - 2));

    string classification;
    if (space <= 200)
    {
        cout<<"SMALL"<<endl;
    }
    else if (space <= 500)
    {
        cout<<"MEDIUM"<<endl;
    }
    else
    {
        cout<<"LARGE"<<endl;
    }


    return 0;
}
