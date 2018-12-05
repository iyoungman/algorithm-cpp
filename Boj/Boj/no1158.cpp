#include <iostream>
#include <cstdio>
#include <string>
#include <queue>
using namespace std;

//�����۽� ����

int main() {

	int number, order;//�����, ����
	queue<int> qu;
	queue<int> resultqu;

	scanf("%d %d", &number, &order);

	for (int i = 0; i < number; i++)
	{
		qu.push(i + 1);//1���� number ���� push
	}

	while (!qu.empty())
	{
		for (int i = 0; i < order - 1; i++)
		{
			qu.push(qu.front());
			qu.pop();
		}

		resultqu.push(qu.front());
		qu.pop();//order��° ����

	}

	int size = resultqu.size();

	printf("<");
	for (int i = 0; i < size - 1; i++)
	{
		printf("%d, ", resultqu.front());
		resultqu.pop();
	}

	printf("%d>\n", resultqu.front());
	resultqu.pop();//��¸� �ϸ� �ǹǷ� ���� �����൵ ��



	return 0;

}