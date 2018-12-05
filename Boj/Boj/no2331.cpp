#include <cstdio>
#include <iostream>
#include <math.h>
using namespace std;

//반복순열

//벡터 필요없다.
int check[250000];//그 정점에 방문했는지에 대한 배열, 원래는 bool형이지만 몇번째 방문에 대한 답을 원하는 문제이므로 int형
////배열 크기는 문제 조건을 보고 나올 수 있는 최대수 : (9의 5제곱 * 4) 를 대략적으로 정함
int nextNumber(int x, int square){
	int next = 0;

	//각 자리수의 제곱을 구해 더하는 코드
	while (x != 0){
		next = next + int(pow(x % 10, square));
		x = x / 10;
	}

	return next;
}



int dfs(int x, int square, int order) {

	if (check[x] != 0) return check[x];//재귀 끝내기

	check[x] = order;//*******check[x]에서 배열 안의 x는 정점숫자를 의미하고(정점 순서아님)

	int y = nextNumber(x, square);

	return dfs(y, square, order + 1);//방문,재귀(실제 int 형인 count값 구할때 까지 계속 리턴),결국에 이 값도 int형이기 때문에 return 가능

}

int main() {

	int n;//숫자
	int square;//제곱

	scanf("%d %d", &n, &square);

	int count = dfs(n, square, 1);//숫자,제곱,순서

	printf("%d\n", count - 1);

	return 0;

}