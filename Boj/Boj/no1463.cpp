#include <iostream>
using namespace std;

//1�� �����

//Top-down = ���ȣ��
int d[10000];//�迭�� ũ��� ������ ���

int makeOne(int n)
{

	if (n == 1) return 0;

	d[n] = makeOne(n - 1) + 1;

	if (n % 2 == 0)
	{
		int temp = makeOne(n / 2) + 1;
		if (d[n] > temp)//���� d[n]�� ��, d[n]�� �ּ�Ƚ���̹Ƿ�
		{
			d[n] = temp;
		}
	}

	if (n % 3 == 0)
	{
		int temp = makeOne(n / 3) + 1;
		if (d[n] > temp)//���� d[n]�� ��, d[n]�� �ּ�Ƚ���̹Ƿ�
		{
			d[n] = temp;
		}
	}

	return d[n];
}


int main() {

	int number = 0;
	cin >> number;
	cout << makeOne(number) << '\n';

	return 0;

}