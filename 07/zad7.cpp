#include<iostream>
using namespace std;
int main()
{
        int counter = 0;

    for (int num = 100; num <= 999; num++) {
        int ones, tens, hundreds;
        ones = num % 10;
        tens = (num / 10) % 10;
        hundreds =num / 100;

        if (ones != 0 && tens != 0 && hundreds != 0) {
            if (num % ones == 0 && num % tens == 0 && num % hundreds == 0) {
                cout << num << endl;
                counter++;
            }
        }
    }

    cout << counter;


    return 0;
}
