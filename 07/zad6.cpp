#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int devide5 = 0;

    for (int i = a; i <= b; i++) {
        if (i % 5 == 0) {
            cout << i << endl;
            devide5++;
        }
    }

    cout << "The numbers are: " << devide5;

    return 0;
}
