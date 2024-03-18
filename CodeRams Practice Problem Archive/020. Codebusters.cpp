#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        string word;
        cin >> word;

        for (int j = 0; j < word.length() - 1; j += 2)
        {
            if ((j + 1) < word.length())
            {
                swap(word[j], word[j + 1]);
            }
        }

        cout << word << endl;
    }

    return 0;
}

