#include <iostream>
#include <ctime>
#include <cstdlib>
#include <time.h>
#include <chrono>
#include <thread>

using namespace std;

struct Driver {

	string name;
	int age;
	int skillLevel;

};

struct Racer {

	string teamName;
	int distance;
	Driver dName;
	string country;
	
};

int main() {

	srand(time(NULL));

	Driver driver1;
	driver1.name = "Lewis Hamilton";
	driver1.age = 36;

	Driver driver2;
	driver2.name = "Daniel Ricciardo";
	driver2.age = 31;

	Driver driver3;
	driver3.name = "Sebastian Vettel";
	driver3.age = 25;

	Racer team1;
	team1.teamName = "Mercedes";
	team1.distance = 0;
	team1.dName = driver1;

	Racer team2;
	team2.teamName = "McLaren";
	team2.distance = 0;
	team2.dName = driver2;

	Racer team3;
	team3.teamName = "Aston Martin";
	team3.distance = 0;
	team3.dName = driver3;
	
	cout << " ---------- Formula 1 ---------- " "\n";
	cout << "\n";

	cout << "The race will  last 5 hours" "\n";
	cout << "\n";

 
	int t1_total = 0, t2_total = 0, t3_total = 0;
	

	for (int hours = 1; hours <= 5; hours++) {
		cout << "Time: " << hours << " hour has been" "\n";
		cout << "\n";

		team1.distance = rand() % 100;
		team2.distance = rand() % 50;
		team3.distance = rand() % 10;


		cout << "The " << team1.teamName << " driven by " << team1.dName.name << " has driven " << team1.distance << " miles \n";
		t1_total = t1_total + team1.distance;

		cout << "The " << team2.teamName << " driven by " << team2.dName.name << " has driven " << team2.distance << " miles \n";
		t2_total = t2_total + team2.distance;

		cout << "The " << team3.teamName << " driven by " << team3.dName.name << " has driven " << team3.distance << " miles \n";
		t3_total = t3_total + team3.distance;
		cout << endl;

		chrono::seconds dura(5);
		this_thread::sleep_for(dura);

	}
	
	cout << t1_total << endl;
	cout << t2_total << endl;
	cout << t3_total << endl;
	cout << "\n";

	if ((t1_total > t2_total) && (t1_total > t3_total)) {
		cout << "The winner of the race is team " << team1.teamName << " driven by " << team1.dName.name << " aged "  << team1.dName.age << "\n";
	}

	else if  ((t2_total > t1_total) && (t2_total > t3_total)) {
		cout << "The winner of the race is team " << team2.teamName << " driven by " << team2.dName.name << " aged " << team2.dName.age << "\n";
	}

	else if ((t3_total > t1_total) && (t3_total > t2_total)) {
		cout << "The winner of the race is team " << team3.teamName << " driven by " << team3.dName.name << " aged " << team3.dName.age << "\n";
	}

	cout << "\n";

	if ((t1_total < t2_total) && (t1_total < t3_total)) {
		cout << "The Loser is " << team1.dName.name << " aged " << team1.dName.age << "\n";
	}
	else if ((t2_total < t1_total) && (t2_total < t3_total)) {
		cout << "The Loser is " << team2.dName.name << " aged " << team2.dName.age << "\n";
	}
	else if ((t3_total < t1_total) && (t3_total < t2_total)) {
		cout << "The Loser is " << team3.dName.name << " aged " << team3.dName.age << "\n";
	}

}
