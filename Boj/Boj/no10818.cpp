#include <iostream>
#include <cstdio>
using namespace std;

//�ּ�, �ִ�

int main() {

	int number;
	int max = -1000000;//����
	int min = 1000000;//����

	int a;

	scanf("%d", &number);

	for (int i = 0; i < number; i++)
	{
		scanf("%d", &a);

		if (a>max)
			max = a;
		else if (a < min)
			min = a;

	}

	cout << min << " " << max << endl;

	return 0;
}