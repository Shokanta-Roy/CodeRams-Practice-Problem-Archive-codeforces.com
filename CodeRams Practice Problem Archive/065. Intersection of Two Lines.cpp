#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include <iomanip>
using namespace std;


int main()
{
    float m1,m2,b1,b2;
    cin>>m1>>b1;
    cin>>m2>>b2;
    float intersect_point=(b2-b1)/(m1-m2);

    cout << setprecision(16);
    cout <<intersect_point<<endl;



    return 0;
}


