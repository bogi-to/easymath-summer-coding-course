#include<iostream>
using namespace std;
int main ()
{
    int a;
    int b;
    cin >> a >> b;

    int sum;
    sum = a + b;

    int difference;
    difference = a - b;

    int product;
    product = a * b;

    int quotient;
    quotient = a / b;

    cout << "The sum is: " << sum << endl;
    cout << "The difference is: " << difference << endl;
    cout << "The product is: " << product << endl;
    cout << "The quotient is: " << quotient;

    return 0;
}
