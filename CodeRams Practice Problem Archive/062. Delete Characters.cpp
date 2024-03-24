#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;
    char chars_to_delete[100];
    int N;
    cin >> S;
    cin >> N;
    // Input characters to be deleted
    for (int i = 0; i < N; ++i)
    {
        cin >> chars_to_delete[i];
    }
    // Remove characters from string S
    string modified_S;
    bool delete_flag;
    for (char c : S)
    {
        delete_flag = false;
        // Check if c is in list of characters to be deleted
        for (int i = 0; i < N; ++i)
        {
            if (c == chars_to_delete[i])
            {
                delete_flag = true;
                break;
            }
        }
        // Add c to modified_S if it's not in list of characters to be deleted
        if (!delete_flag)
        {
            modified_S += c;
        }
    }

    // Output the modified string
    cout <<modified_S << endl;

    return 0;
}

