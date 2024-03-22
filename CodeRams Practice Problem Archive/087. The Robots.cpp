#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>


using namespace std;

int main()
{
    string input;
    getline(cin, input);
    for(int i=0; i<3; i++)
    {
        cout<<input<<endl;
    }

    return 0;
}
