#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int sum_of_angles = (n - 2) * 180;
        cout << sum_of_angles << endl;
    }

    return 0;
}

