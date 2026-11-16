// Name: Logen Wolfe
// Date: 11/16/2026
// Program: Chapter 6 Exercise 18
// Description: This program will project the population of a city based on user input for starting population, birth rate, death rate, and number of years to project.


#include <iostream>
#include <iomanip>
using namespace std;
int GetStartPopulation();
double GetBirthRate();
double GetDeathRate();
int GetYears();
double GetNextPopulation(double p, double b, double e);


int main() {
	int years;
		double brate;
		double drate;
	
		int startpop = GetStartPopulation();
		years = GetYears();
		brate = GetBirthRate() / 100.0; // Note - To make sure the number is seen as a decimal!
		drate = GetDeathRate() / 100.0; // Note - To ensure the number is seen as a decimal!
		double population = startpop;
		cout << fixed << setprecision(0);
	for (int year=1;year <= years;year++) {
		double nextpopulation = GetNextPopulation(population, brate, drate);
		cout << "After " << year << " years, the population will be " << nextpopulation << endl;
population = nextpopulation; // Note - this is here to ensure the population increases until the end of the loop.
	}

	if (population < 0) {
		cout << "LESS than no people!? Sheesh.." << endl;
	}




}

double GetNextPopulation(double p, double b, double e) {
	return p*(1 + b) * (1 - e);
}

int GetStartPopulation() {
	int pop;
	cout << "Welcome to Logen's Population Projector!" << endl;
	cout << "First, enter the starting population!" << endl;
	cin >> pop;
	return pop;
}

double GetBirthRate() {

	double birthrate;
	cout << "Next, enter the birth rate!" << endl;
	cin >> birthrate;
	return birthrate;

}

double GetDeathRate() {
	double deathrate;
	cout << "Next, enter the death rate!" << endl;
	cin >> deathrate;
	return deathrate;
}

int GetYears() {
	int years;
	cout << "Finally, enter the number of years to project!" << endl;
	cin >> years;
	return years;
}