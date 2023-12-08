#include <iostream>
#include <string>
using namespace std;

int practice(void)
{
	int a = 1000;
	int b = 300;

	cout << "현재 가지고 있는 돈 : ";
	cout << a << endl;
	cout << "사탕의 가격 : ";
	cout << b << endl;

	int c = a / b;
	int d = a % b;
	cout << "최대로 살 수 있는 캔디의 개수 : " << c << endl;
	cout << "캔디 구입 후 남는 돈 : " << d << endl;

	return c, d;
}