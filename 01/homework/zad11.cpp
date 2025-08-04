#include<iostream>
using namespace std;
int main ()
{
    int a;
    int b;
    int k;
    cin >> a >> b >> k;
    int broi;
    broi =(b - a)/k + 1;
    cout << "Broiat e: " << broi << endl;
    int sbor;
    sbor = (a + b)*broi /2;
    cout << "Sborut e: " << sbor;
    return 0;
}
