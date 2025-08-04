#include<iostream>
using namespace std;
int main ()
{
   int n;
   cin >> n;

   int ones, tens, hundreds;
   ones = n % 10;
   tens = (n / 10) % 10;
   hundreds = n / 100;

   if (n % (ones + tens + hundreds) == 0) {
    cout << "Yes.";
   } else {
    cout << "No.";
   }

    return 0;
}
