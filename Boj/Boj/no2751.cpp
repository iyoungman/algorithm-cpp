#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
using namespace std;

//�� �����ϱ�


int main() {

	int number = 0;
	int upsort[1000000];

	scanf("%d", &number);

	for (int i = 0; i < number; i++)
	{
		scanf("%d", &upsort[i]);

	}

	//0���� number - 1 ���� ����
	//sort(upsort[0], upsort[number]); �� ����� �ȵ�
	sort(upsort, upsort + number);// ��

	for (int i = 0; i < number; i++)
	{
		printf("%d\n", upsort[i]);
	}

	return 0;

}