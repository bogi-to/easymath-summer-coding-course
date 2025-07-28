#include<iostream>
using namespace std;
main ()
{
    int g, p, n, total_slices, boxes_of_pizza;

    cin >> g >> p >> n;

    g = g + 1;

    total_slices = g * p;

    boxes_of_pizza = (total_slices + n - 1) / n;

    cout << boxes_of_pizza;

    return 0;
}

