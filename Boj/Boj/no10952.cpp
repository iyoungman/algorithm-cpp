#include <iostream>
#include <cstdio>
using namespace std;

//A+B - 5

int main() {

	int a = 0, b = 0;

	while (scanf("%d %d", &a, &b) != EOF)//���� ����x ���� �����͸� ������ ���� ������ ������ �ݺ�
	{

		if (a == 0 && b == 0)
		{
			return 0;
		}

		printf("%d\n", a + b);
	}
	return 0;
}