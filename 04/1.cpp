#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin >> n;

    if (n % 2 == 0) {
        cout << n << " se deli na 2." << endl;
    } else {
        cout << n << " ne se deli na 2." << endl;
    }

    if (n % 3 == 0) {
        cout << n << " se deli na 3."<< endl;
    } else {
        cout << n << " ne se deli na 3." << endl;
    }

    if (n % 4 == 0) {
        cout << n << " se deli na 4." << endl;
    } else {
        cout << n << " ne se deli na 4." << endl;
    }

    if (n % 5 == 0) {
        cout << n << " se deli na 5. " << endl;
    } else {
        cout << n << " ne se deli na 5. " << endl;
    }

    return 0;
}
