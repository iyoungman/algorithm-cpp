#include <iostream>
#include <cstdio>
using namespace std;

//A+B - 5

int main() {

	int a = 0, b = 0;

	while (scanf("%d %d", &a, &b) != EOF)//종료 조건x 따라서 데이터를 읽을수 없는 상태일 때까지 반복
	{

		if (a == 0 && b == 0)
		{
			return 0;
		}

		printf("%d\n", a + b);
	}
	return 0;
}