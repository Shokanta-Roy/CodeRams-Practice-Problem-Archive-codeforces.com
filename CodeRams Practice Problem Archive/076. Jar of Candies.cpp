#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

int main()
{
    int n;
    cin>>n;
    int candies_remain;
    while(cin>>candies_remain)
    {
        int candies_stolen= n-candies_remain;
        cout<<candies_stolen<<endl;
        n=candies_remain;
    }
    return 0;
}
