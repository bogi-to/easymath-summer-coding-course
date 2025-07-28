#include<iostream>
using namespace std;
int main ()
{
    int n , a , k;

    cin >> n >> a >> k;

    int na = n * a;
    int x = n - 1;
    int k_count = x * (x + 1) / 2;

    cout << na + (k_count * k);

    return 0;
}
