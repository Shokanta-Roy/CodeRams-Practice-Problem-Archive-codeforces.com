#include <iostream>
#include <algorithm>
#include<string>
using namespace std;

int main()
{
    float mpg, distance, cpg;
    cin>>mpg>>distance>>cpg;
    float cost_of_trip=(distance/mpg)*cpg;
    cout<<cost_of_trip<<endl;

    return 0;
}

