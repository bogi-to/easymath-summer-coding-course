#include<iostream>
using namespace std;

int main()
{
    int p, n;
    cin >> p >> n;

    int weeks = n / 7;
    int last_day = (p + n - 1) % 7;
    if (last_day == 0) {
        last_day = 7;
    }

    int c = weeks * 2;
    int days = n % 7;

    if (p == 1) {
        if (days > 2) {
            if (days > 5) {
                c += 2;
            } else {
                c++;
            }
        }
    }

    if (p == 2) {
        if (days > 1) {
            if (days > 4) {
                c += 2;
            } else {
                c++;
            }
        }
    }

    if (p == 3) {
        if (days > 1) {
            c++;
            if (days > 3) {
                c++;
            }
        }
    }

    if (p == 4) {
        if (days > 2) {
            if (days > 6) {
                c += 2;
            } else {
                c++;
            }
        }
    }

    if (p == 5) {
        if (days > 1) {
            if (days > 5) {
                c += 2;
            } else {
                c++;
            }
        }
    }

    if (p == 6) {
        c++;
        if (days > 4) {
            c++;
        }
    }

    if (p == 7) {
        if (days > 3) {
            c++;
            if (days > 6) {
                c++;
            }
        }
    }


    cout << weeks << endl << last_day << endl << c << endl;


    return 0;
}

