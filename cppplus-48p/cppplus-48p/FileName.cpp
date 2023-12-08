#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string name;
	string s1;
	s1 = "이름을 입력하시오 : ";
	cout << s1;
	cin >> name;
	string s2;
	s2 = "을 환영합니다.";
	cout << name;
	cout << s2 << endl;

	return 0;
}