#include <iostream>
using namespace std;

//�ִ������� �ּҰ����


//��Ŭ���� ȣ����
int gcd(int a, int b){

	while (b != 0)
	{
		int r = a%b;
		a = b;
		b = r;
	}

	//b�� 0�϶� a�� �ִ�����
	return a;

}

int main() {

	int one, two;
	cin >> one >> two;
	cout << gcd(one, two) << '\n';
	cout << (one*two) / gcd(one, two) << '\n'; //A*B = L*G �̿�

	return 0;

}