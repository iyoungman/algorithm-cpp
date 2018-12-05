#include <iostream>
#include <cstdio>
#include <string>
#include <queue>
using namespace std;

//조세퍼스 문제

int main() {

	int number, order;//사람수, 순서
	queue<int> qu;
	queue<int> resultqu;

	scanf("%d %d", &number, &order);

	for (int i = 0; i < number; i++)
	{
		qu.push(i + 1);//1부터 number 까지 push
	}

	while (!qu.empty())
	{
		for (int i = 0; i < order - 1; i++)
		{
			qu.push(qu.front());
			qu.pop();
		}

		resultqu.push(qu.front());
		qu.pop();//order번째 제거

	}

	int size = resultqu.size();

	printf("<");
	for (int i = 0; i < size - 1; i++)
	{
		printf("%d, ", resultqu.front());
		resultqu.pop();
	}

	printf("%d>\n", resultqu.front());
	resultqu.pop();//출력만 하면 되므로 굳이 안해줘도 됨



	return 0;

}