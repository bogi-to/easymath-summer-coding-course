#include<iostream>
using namespace std;
int main()
{
    int m;
    cin >> m;
    int counter = 0;

    for (int num = 100; num <= 999; num++) {
        int ones, tens, hundreds;
        ones = num % 10;
        tens = (num / 10) % 10;
        hundreds =num / 100;

        if (ones + tens + hundreds == m) {
            cout << num << endl;
            counter++;
        }
    }

    cout << counter;

    return 0;
}
