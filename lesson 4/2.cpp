#include<iostream>
using namespace std;
int main ()
{
    int a, b, c;
    cin >> a >> b >> c;

    int biggest_number;
    biggest_number = a;

    if (biggest_number <= b) {
        biggest_number = b;
    }

    if (biggest_number <= c) {
        biggest_number = c;
    }

    cout << biggest_number;

    return 0;
}
