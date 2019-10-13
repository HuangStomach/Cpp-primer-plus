#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    long seconds;
    long minutes;
    long hours;
    long days;


    cout << "Enter the number of seconds: ";
    cin >> seconds;
    cout << seconds;

    minutes = seconds / 60;
    seconds %= 60;
    
    hours = minutes / 60;
    minutes %= 60;

    days = hours / 24;
    hours %= 24;

    cout << " seconds = " << days << " days, " << hours << " hours, "  << minutes << " minutes, " << seconds << " seconds";
    
    return 0;
}
