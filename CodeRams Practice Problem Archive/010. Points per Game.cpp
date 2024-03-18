#include<iostream>
#include <iomanip>

#include<cmath>
using namespace std;

int main()
{
    int p,g;
    cin>>p>>g;
    double ppg = static_cast<double>(p) / g;
    cout.precision(17);
    cout<<ppg<<endl;

    return 0;
}
