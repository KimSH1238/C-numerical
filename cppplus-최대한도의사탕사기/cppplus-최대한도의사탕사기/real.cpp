#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	//변수 선언
	int money;
	int candy_price;

	//input 받기
	cout << "현재 가지고 있는 돈 : ";
	cin >> money;
	cout << "사탕의 가격 : ";
	cin >> candy_price;
	cout << endl;

	//계산 후 output 도출
	int c = money / candy_price;
	int d = money % candy_price;
	cout << "최대로 살 수 있는 캔디의 개수 : " << c << endl;
	cout << "캔디 구입 후 남는 돈 : " << d << endl;

	return c, d;
}