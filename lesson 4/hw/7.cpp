#include<iostream>
using namespace std;

int main()
{
    double f,c;
    cin >> f;

    c = (f - 32) / 1.8;
    cout << "The temperature is " << c << "." << endl;

    if (c <= 15) {
        cout << "It's cold.";
    }

    if (c >= 16 && c <= 25) {
        cout << "It's moderate.";
    }

    if (c >= 26 && c <= 35) {
        cout << "It's hot.";
    }

    if (c >= 35) {
        cout << "It's very hot.";
    }

    return 0;
}

