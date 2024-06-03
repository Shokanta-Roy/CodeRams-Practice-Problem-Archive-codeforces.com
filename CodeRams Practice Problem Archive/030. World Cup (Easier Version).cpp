#include <iostream>
#include<string>

using namespace std;

int main()
{
    int win, tie, loss;
    char ch;
    cin>>win>>ch>>loss>>ch>>tie;
    int n= (win*3)+ (tie*1)+ (loss*0);
    cout<<n<<endl;


    return 0;
}
