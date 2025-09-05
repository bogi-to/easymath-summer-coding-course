#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    string number;
    cin >> number;

    sort(number.begin(), number.end());

    int d1, d2, d3, d4;
    d1 = number[3] - '0';
    d2 = number[2] - '0';
    d3 = number[1] - '0';
    d4 = number[0] - '0';

    if (d1 != d2 && d1 != d3 && d1 != d4
        && d2 != d3 && d2 != d4 && d3 != d4) {

            if (d1 != 0 || d2 != 0 || d3 != 0 || d4 != 0) {

                if (d1 >= d2 + d3 + d4) {

                    if (d2 >= d3 + d4) {

                        cout << "yes";
                        return 0;

                    }

                }

            }

    }

    cout << "no";

	return 0;
}
