#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

const int MAX_STATES = 100;

int main()
{
    int n;

    int speed[MAX_STATES];
    string states[MAX_STATES];
    cin>>n;
    for (int  i = 0; i < n; i++)
    {
        cin>>states[i]>>speed[i];
    }
    int t;
    cin>>t;
    string state;
    for (int i = 0; i < t; i++)
    {
        cin>>state;
        bool found = false;
        for (int j = 0; j < n; j++)
        {
            if (states[j] == state)
            {
                cout<<speed[j]<<endl;
                found=true;
                break;
            }
        }
        if (!found)
        {
            return 0;
        }

    }
    return 0;
}

