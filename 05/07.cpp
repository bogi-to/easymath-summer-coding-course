#include<iostream>
using namespace std;
int main ()
{
    double grade;
    int students_class;
    cin >> students_class >> grade;

    if (students_class == 8 || students_class == 9) {
        if (grade < 4.50) {
            cout << "No scholarship.";
        } else if (grade >= 4.50 && grade <= 5.50) {
            cout << "30 BGN";
        } else if (grade >= 5.50 && grade <= 6.00) {
            cout << "50 BGN";
        }

        return 0;
    }

    if (students_class == 10 || students_class == 11) {
        if (grade < 5.00) {
            cout << "No scholarship.";
        } else if (grade >= 5.00 && grade <= 5.75) {
            cout << "40 BGN";
        } else if (grade >= 5.75 && grade <= 6.00) {
            cout << "70 BGN";
        }

        return 0;
    }

    if (students_class == 12) {
        if (grade < 5.50) {
            cout << "No scholarship.";
        } else if (grade >= 5.50 && grade <= 6) {
            cout << "100 BGN";
        }

        return 0;
    }

    return 0;

    }

