#include<iostream>
using namespace std;
int main ()
{
    double height, weight;

    cin >> height >> weight;

    double bmi;
    bmi = weight / (height * height);

    cout.precision(4);
    cout << "Your bmi is: " << bmi << endl;

    if (bmi < 18.5) {
        cout << "You are below the norm.";
    }

    if (bmi >= 18.5 && bmi <= 25) {
        cout << "You are in the norm.";
    }

    if (bmi > 25) {
        cout << "You are overweight.";
    }

    return 0;
}
