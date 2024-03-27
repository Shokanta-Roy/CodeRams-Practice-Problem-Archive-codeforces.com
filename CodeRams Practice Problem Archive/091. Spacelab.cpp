#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string mylab, rivallab;
    string planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    const int numberofPlanets = sizeof(planets) / sizeof(planets[0]);

    getline(cin, mylab);
    getline(cin, rivallab);


    int myIndex = -1, rivalIndex = -1;
    for (int i = 0; i < numberofPlanets; ++i)
    {
        if (mylab == planets[i])
        {
            myIndex = i;
        }
        if (rivallab == planets[i])
        {
            rivalIndex = i;
        }
    }

    if (myIndex < rivalIndex)
    {
        cout << "CLOSER" << endl;
    }
    else if (myIndex > rivalIndex)
    {
        cout << "FARTHER AWAY" << endl;
    }
    else
    {
        cout << "THE SAME" << endl;
    }

    return 0;
}
