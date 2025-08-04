#include<iostream>
using namespace std;

int main()
{
	string how_it_ends;
	int tournaments, points = 0, points_start;
	double tournaments_won;

	cin >> tournaments >> points_start;


	for (int i = 0; i < tournaments; i++) {
        cin >> how_it_ends;

        if (how_it_ends == "W") {
            points += 2000;
            tournaments_won += 1;
        } else if (how_it_ends == "F") {
            points += 1200;
        } else if (how_it_ends == "SF") {
            points += 720;
        }
	}


    cout << "Final points: " << points_start + points << endl;
    cout << "Average points: " << points / tournaments << endl;
    cout << (tournaments_won / tournaments) * 100 << "%";

	return 0;
}

