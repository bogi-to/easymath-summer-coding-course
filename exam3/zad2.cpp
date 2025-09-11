#include<bits/stdc++.h>
using namespace std;
int main()
{
	int rows, cols;
	cin >> rows >> cols;

	for (int r = 0; r < rows; r++) {

        for (int c = 0; c < cols; c++) {

            if (r == 0 || r == rows - 1) {
                cout << "*";
            } else {
                if (c == 0 || c == cols - 1) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
        }

        cout << endl;
	}

	return 0;
}
