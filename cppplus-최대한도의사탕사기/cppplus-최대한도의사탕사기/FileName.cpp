#include <iostream>
#include <string>
using namespace std;

int practice(void)
{
	int a = 1000;
	int b = 300;

	cout << "���� ������ �ִ� �� : ";
	cout << a << endl;
	cout << "������ ���� : ";
	cout << b << endl;

	int c = a / b;
	int d = a % b;
	cout << "�ִ�� �� �� �ִ� ĵ���� ���� : " << c << endl;
	cout << "ĵ�� ���� �� ���� �� : " << d << endl;

	return c, d;
}