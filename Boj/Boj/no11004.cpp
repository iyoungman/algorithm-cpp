#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

//K��° ��

int main() {

	int number = 0;
	int order;

	scanf("%d %d", &number, &order);

	vector<int> a(number);//���� �迭

	//�Է�
	for (int i = 0; i < number; i++)
	{
		scanf("%d", &a[i]);

	}

	//����
	sort(a.begin(), a.end());


	//K��° �� ���
	printf("%d\n", a[order - 1]);


	return 0;

}