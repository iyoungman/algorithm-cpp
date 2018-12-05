#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

//좌표 정렬하기

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
		return false;//x와 y가 바껴야하면 false 리턴
}

int main() {

	int number = 0;

	scanf("%d", &number);

	vector <sorting> a(number);

	for (int i = 0; i < number; i++)
	{
		scanf("%d %d", &a[i].left, &a[i].rigth);
	}


	sort(a.begin(), a.end(), cmp);//구조체를 이용해서 비교할 경우 비교함수를 만든다.

	//vector 출력
	for (int i = 0; i < number; i++)
	{
		printf("%d %d\n", a[i].left, a[i].rigth);
	}

	return 0;

}