#include<iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin>> n;

    int throws,total_throws=0, attempted, total_attempted=0;
    for(int i=0; i<n; i++)
    {
        cin>>throws>>attempted;
        total_throws=total_throws+throws;
        total_attempted= total_attempted+attempted;
    }
    double percentage= ((double)total_throws*100)/total_attempted;
    cout << fixed << setprecision(2) << percentage << endl;
    return 0;

}
