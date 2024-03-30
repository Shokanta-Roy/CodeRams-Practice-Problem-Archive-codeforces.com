#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

struct Car
{
    string name;
    int efficiency;
    int speed;
    int score;
};

bool compareCars(const Car& a, const Car& b)
{
    if (a.score == b.score)
        return a.name < b.name;
    return a.score < b.score;
}

int main()
{
    int n;
    cin >> n;

    Car cars[n];


    for (int i = 0; i < n; ++i)
    {
        cin >> cars[i].name >> cars[i].efficiency >> cars[i].speed;
        cars[i].score = cars[i].efficiency * cars[i].speed;
    }


    sort(cars, cars + n, compareCars);

    for (int i = 0; i < n; ++i)
    {
        cout << cars[i].name << " " << cars[i].efficiency << " " << cars[i].speed << endl;
    }

    return 0;
}
