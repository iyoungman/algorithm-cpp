#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

//좌표 정렬하기 2

//vector 와 pair을 사용, pair: 두 자료형을 하나로 묶어주는 것 좌표를 사용할 때 사용하면 유용 
//vector <"return 자료형" > 변수 이름(크기)
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

	//좌표 입력
	for (int i = 0; i < number; i++)
	{
		scanf("%d %d", &a[i].first, &a[i].second);
	}

	//좌표 정렬
	//1. x,y 좌표 스왑
	for (int i = 0; i < number; i++)
	{
		swap(&a[i].first, &a[i].second);
	}

	//2.정렬
	sort(a.begin(), a.end());

	//3.원래대로 스왑
	for (int i = 0; i < number; i++)
	{
		swap(&a[i].first, &a[i].second);
	}

	//vector 출력
	for (int i = 0; i < number; i++)
	{
		printf("%d %d\n", a[i].first, a[i].second);
	}


	return 0;

}