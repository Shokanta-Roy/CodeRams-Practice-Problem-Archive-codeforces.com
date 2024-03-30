//LCM(a,b)=(a*b)/GCD(a,b);
//Write a function for GCD;
//Write a function for LCM;
//Call it from the MAIN function;
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int gcd(int a,int b)
{
    while(b!=0)
    {
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}

int lcm(int a, int b)
{
    return (a*b)/gcd(a,b);
}
int main()
{
    int a, b;
    cin>>a>>b;
    cout<<lcm(a,b)<<endl;
    return 0;
}
