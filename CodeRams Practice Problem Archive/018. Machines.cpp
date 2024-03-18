#include <iostream>
#include <iomanip>
#include <string>
#include<cmath>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        double a,b;
        cin>>a>>b;
        double result= a/b;
        cout.precision(17);
        cout<<result<<endl;
    }

    return 0;
}
