#include<iostream>
#include<string>
using namespace std;

int main()
{
	string actor;
	double points;
	int judges;

	getline(cin, actor);
	cin >> points >> judges;
	cin.ignore();

	for (int i = 0; i < judges; i++) {

        string name;
        double judge_points;

        getline(cin, name);
        cin >> judge_points;
        cin.ignore();

        double gives_points = name.length() * judge_points / 2;
        points = points + gives_points;

        if (points > 1250.5) {
            cout << "Congratulations, " << actor
            << " got a nominee for leading role with " << points << "!";

            return 0;
        }
	}

    cout << "Sorry, " << actor << " you need " << 1250.5 - points << " more!";

	return 0;
}

