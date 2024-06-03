#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int count = 0;
    int prevNum = -1;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        if (num != prevNum)
        {
            count++;
            prevNum = num;
        }
    }

    cout << count << endl;

    return 0;
}

