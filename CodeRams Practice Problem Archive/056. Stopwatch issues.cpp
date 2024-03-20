#include <iostream>

using namespace std;

string formatTime(int seconds)
{
    int years = seconds / (365 * 24 * 3600);
    seconds %= (365 * 24 * 3600);
    int days = seconds / (24 * 3600);
    seconds %= (24 * 3600);
    int hours = seconds / 3600;
    seconds %= 3600;
    int minutes = seconds / 60;
    seconds %= 60;

    string formattedTime = "";
    int count = 0;

    if (years > 0)
    {
        formattedTime += to_string(years) + " year";
        if (years > 1)
            formattedTime += "s";
        count++;
    }

    if (days > 0)
    {
        if (count > 0)
            formattedTime += ", ";
        formattedTime += to_string(days) + " day";
        if (days > 1)
            formattedTime += "s";
        count++;
    }

    if (hours > 0)
    {
        if (count > 0)
            formattedTime += ", ";
        formattedTime += to_string(hours) + " hour";
        if (hours > 1)
            formattedTime += "s";
        count++;
    }

    if (minutes > 0)
    {
        if (count > 0)
            formattedTime += ", ";
        formattedTime += to_string(minutes) + " minute";
        if (minutes > 1)
            formattedTime += "s";
        count++;
    }

    if (seconds > 0)
    {
        if (count > 0)
            formattedTime += " and ";
        formattedTime += to_string(seconds) + " second";
        if (seconds > 1)
            formattedTime += "s";
    }

    if (formattedTime == "")
        return "now";

    return formattedTime;
}

int main()
{
    int seconds;
    cin >> seconds;

    cout << formatTime(seconds) << endl;

    return 0;
}
