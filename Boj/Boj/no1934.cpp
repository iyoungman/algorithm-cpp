#include <iostream>
using namespace std;

//�ּҰ����


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

	int number, one, two;
	cin >> number;
	for (int i = 0; i < number; i++)
	{

		cin >> one >> two;
		cout << (one*two) / gcd(one, two) << '\n'; //A*B = L*G �̿�
	}
	return 0;

}