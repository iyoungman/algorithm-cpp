#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
using namespace std;

//수 정렬하기


int main() {

	int number = 0;
	int upsort[1000000];

	scanf("%d", &number);

	for (int i = 0; i < number; i++)
	{
		scanf("%d", &upsort[i]);

	}

	//0부터 number - 1 까지 정렬
	//sort(upsort[0], upsort[number]); 이 방식은 안됨
	sort(upsort, upsort + number);// 됨

	for (int i = 0; i < number; i++)
	{
		printf("%d\n", upsort[i]);
	}

	return 0;

}