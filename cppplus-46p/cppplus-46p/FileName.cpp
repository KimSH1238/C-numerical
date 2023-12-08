#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	auto i = 1000;
	cout << "변수 i의 값은 ";
	cout << i;
	cout << "입니다." << endl;

	string s1 = "변수 i의 값은 ";
	string s2 = "입니다.";
	cout << s1;
	cout << i;
	cout << s2 << endl;
	
	return 0;
}