#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>


using namespace std;
int main()
{
    int rows;
    cin >> rows;
    for (int i = 0; i < rows; i++)
    {
        int number = 1;
        // Second loop for printing numbers in each row
        for (int j = 0; j <= i; j++)
        {
            cout << number << " "; // Print the calculated number
            // Calculate the next number using Pascal's triangle formula
            number = number * (i - j) / (j + 1);
        }
        cout << endl; // Move to the next line after printing each row
    }
    return 0;
}
