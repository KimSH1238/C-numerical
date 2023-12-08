#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	float c;
	float f;

	cout << "섭씨온도를 입력하시오 : ";
	cin >> c;
	cout << endl;

	f = (c + 32.0) * (9. / 5.);
	cout << "화씨온도는 " << f << "입니다." << endl;

	return 0;
}