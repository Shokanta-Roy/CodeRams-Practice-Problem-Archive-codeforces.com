#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int perimeter_sum = 0;
    for (int i = 0; i < n; ++i)
    {
        int side_length;
        cin >> side_length;
        int perimeter = 3 * side_length;
        perimeter_sum += perimeter;
    }
    cout << perimeter_sum << endl;

    return 0;
}
