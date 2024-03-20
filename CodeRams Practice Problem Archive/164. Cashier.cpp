#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>


using namespace std;

float calculateTotal(float *prices, int count)
{
    float total = 0.0;
    for (int i = 0; i < count; ++i)
    {
        total += prices[i];
    }
    return total;
}

int main()
{
    const int MAX_ITEMS = 1000;
    float prices[MAX_ITEMS];
    int count = 0;

    string input;
    float price;

    while (true)
    {
        getline(cin, input);
        if (input == "done")
        {
            break;
        }

        istringstream iss(input);
        if (!(iss >> price))
        {

            continue;
        }

        prices[count++] = price;

        if (count >= MAX_ITEMS)
        {

            break;
        }
    }

    float total = calculateTotal(prices, count);
    cout << setprecision(17);
    cout <<  total << endl;


    return 0;
}
