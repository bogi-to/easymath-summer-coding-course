#include<iostream>
using namespace std;

int main()
{
    int h, m, n;
    cin >> h >> m;
    cin >> n;

    int mn = m + n;
    int minutes = mn % 60;
    int hours = mn / 60;

    h += hours;
    h %= 24;

    if(h < 10) {
        cout << "0";
    }

    cout << h << ":";

    if(minutes < 10) {
        cout << "0";
    }

    cout << minutes << endl;


    return 0;
}
