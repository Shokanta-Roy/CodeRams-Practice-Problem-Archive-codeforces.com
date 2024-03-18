#include<iostream>
#include <iomanip>

#include<cmath>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    double result = static_cast<double>(a*b) / (a+b);
    cout.precision(17);
    cout<<result<<endl;

    return 0;
}
