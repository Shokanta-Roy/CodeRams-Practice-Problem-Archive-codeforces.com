#include <iostream>
#include<cmath>
#include <iomanip>

using namespace std;

int main()
{
    double G = 6.67 * pow(10, -1);
    double c = 3 * pow(10, 4);
    double M;
    cin >> M;
    double rs = (2 * G * M) / (c * c);

    cout << setprecision(17);
    cout<<rs<<endl;
    return 0;
}
