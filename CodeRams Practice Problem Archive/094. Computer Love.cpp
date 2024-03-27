#include <iostream>
using namespace std;

int largestPowerOfTwoInRange(int x, int y)
{
    int largest = -1;

    for (int i = 31; i >= 0; --i)
    {
        int powerOfTwo = 1 << i;
        if (powerOfTwo <= y && powerOfTwo >= x)
        {
            largest = powerOfTwo;
            break;
        }
    }

    return largest;
}

int main()
{
    int x, y;
    cin >> x >> y;

    int result = largestPowerOfTwoInRange(x, y);
    cout << result <<endl;

    return 0;
}
