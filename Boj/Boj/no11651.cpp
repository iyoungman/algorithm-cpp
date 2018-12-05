#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

//��ǥ �����ϱ� 2

//vector �� pair�� ���, pair: �� �ڷ����� �ϳ��� �����ִ� �� ��ǥ�� ����� �� ����ϸ� ���� 
//vector <"return �ڷ���" > ���� �̸�(ũ��)
//pair.first, pair.second

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;

}

int main() {

	int number = 0;

	scanf("%d", &number);

	vector <pair<int, int> > a(number);

	//��ǥ �Է�
	for (int i = 0; i < number; i++)
	{
		scanf("%d %d", &a[i].first, &a[i].second);
	}

	//��ǥ ����
	//1. x,y ��ǥ ����
	for (int i = 0; i < number; i++)
	{
		swap(&a[i].first, &a[i].second);
	}

	//2.����
	sort(a.begin(), a.end());

	//3.������� ����
	for (int i = 0; i < number; i++)
	{
		swap(&a[i].first, &a[i].second);
	}

	//vector ���
	for (int i = 0; i < number; i++)
	{
		printf("%d %d\n", a[i].first, a[i].second);
	}


	return 0;

}