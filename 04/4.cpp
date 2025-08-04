#include<iostream>
using namespace std;
int main ()
{
    int a, b, c;
    cin >> a >> b >> c;

    if ((a + b) > c && (b + c) > a and (a + c) > b) {
        cout << "Takuv triugulnik sushtestvuva!" << endl;
        if (a == b and a == c) {
            cout << "Triugulnikut e ravnostranen.";
        } else if (a == b or a == c) {
            cout << "triugulnikut e pavnobedren.";
        } else cout << "Triugulnikut e raznostranen.";
    } else {
        cout << "Takuv triugulnik NE sushtestvuva.";
    }

    return 0;
}
