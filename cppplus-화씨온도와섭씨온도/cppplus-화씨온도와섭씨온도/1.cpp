#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	float c;
	float f;

	cout << "�����µ��� �Է��Ͻÿ� : ";
	cin >> c;
	cout << endl;

	f = (c + 32.0) * (9. / 5.);
	cout << "ȭ���µ��� " << f << "�Դϴ�." << endl;

	return 0;
}