#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include <iomanip>
using namespace std;


int main()
{
    float fc,mass,radius;
    cin>>fc>>mass>>radius;
    float tangential_velocity=sqrt((fc*radius)/mass);
    cout << setprecision(17);
    cout <<tangential_velocity<<endl;

    return 0;
}


