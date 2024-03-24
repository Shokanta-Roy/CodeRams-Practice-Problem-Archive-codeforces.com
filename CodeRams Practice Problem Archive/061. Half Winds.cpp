#include <iostream>
#include <algorithm>
#include<string>
using namespace std;

int main()
{
    string ch;
    cin>>ch;
    if(ch=="NNE")
    {
        cout<<"north-northeast"<<endl;
    }
    else if(ch=="ENE")
    {
        cout<<"east-northeast"<<endl;
    }
    else if(ch=="ESE")
    {
        cout<<"east-southeast"<<endl;
    }
    else if(ch=="SSE")
    {
        cout<<"south-southeast"<<endl;
    }
    else if(ch=="SSW")
    {
        cout<<"south-southwest"<<endl;
    }
    else if(ch=="WSW")
    {
        cout<<"west-southwest"<<endl;
    }
    else if(ch=="WNW")
    {
        cout<<"west-northwest"<<endl;
    }
    else if(ch=="NNW")
    {
        cout<<"north-northwest"<<endl;
    }

    return 0;
}

