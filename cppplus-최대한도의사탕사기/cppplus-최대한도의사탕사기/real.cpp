#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	//���� ����
	int money;
	int candy_price;

	//input �ޱ�
	cout << "���� ������ �ִ� �� : ";
	cin >> money;
	cout << "������ ���� : ";
	cin >> candy_price;
	cout << endl;

	//��� �� output ����
	int c = money / candy_price;
	int d = money % candy_price;
	cout << "�ִ�� �� �� �ִ� ĵ���� ���� : " << c << endl;
	cout << "ĵ�� ���� �� ���� �� : " << d << endl;

	return c, d;
}