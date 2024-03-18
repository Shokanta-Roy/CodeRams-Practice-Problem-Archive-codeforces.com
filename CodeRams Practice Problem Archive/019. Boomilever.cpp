#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n,m,count=0;
    cin >> n>>m;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin>>arr[i];
        if(arr[i]>=m){
            count++;
        }

    }
    cout<<count<<endl;

    return 0;
}
