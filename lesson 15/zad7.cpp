#include <iostream>
using namespace std;
int main() {

    long long n;
    cin >> n;

    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            int counter = 0;

            while (n % i == 0) {
                n /= i;

                counter++;
            }

            if (counter == 1) {
                cout << i << " ";
            } else {
            cout << i << "^" << counter << " ";
            }

        }
    }

    if (n > 1) {
        cout << n;
    }

    return 0;
}
