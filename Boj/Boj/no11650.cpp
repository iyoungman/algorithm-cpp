#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

//��ǥ �����ϱ�

struct sorting
{
	int left;
	int rigth;

};

bool cmp(const sorting &x, const sorting &y)
{
	if (x.left < y.left)
		return true;
	else if (x.left == y.left)
		return x.rigth < y.rigth;
	else
		return false;//x�� y�� �ٲ����ϸ� false ����
}

int main() {

	int number = 0;

	scanf("%d", &number);

	vector <sorting> a(number);

	for (int i = 0; i < number; i++)
	{
		scanf("%d %d", &a[i].left, &a[i].rigth);
	}


	sort(a.begin(), a.end(), cmp);//����ü�� �̿��ؼ� ���� ��� ���Լ��� �����.

	//vector ���
	for (int i = 0; i < number; i++)
	{
		printf("%d %d\n", a[i].left, a[i].rigth);
	}

	return 0;

}