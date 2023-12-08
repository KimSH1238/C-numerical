#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string s1 = "»ç°ú";
	string s2;

	s2 = s1 + " " + to_string(10) + "°³";
	cout << s2 << endl;

	const double TAXR = 0.25;
	float income = 1000;
	income = income - TAXR * income;
	cout << income << endl;
	return 0;
}