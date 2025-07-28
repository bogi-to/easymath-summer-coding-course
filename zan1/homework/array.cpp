#include<iostream>
using namespace std;

int main()
{
    int arr[5]; // initialize array

    for (int i = 0; i < 5; i++) {
        arr[i] = i + 10;
    }

    cout << arr[4];

    return 0;
}
