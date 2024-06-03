#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int total = 1;
    for (int i = 0; i < n; ++i)
    {
        int lower, upper;
        cin >> lower >> upper;
        total *= (upper - lower + 1);
    }

    cout << total << endl;

    return 0;
}
