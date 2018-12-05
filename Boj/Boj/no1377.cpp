#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

//버블 소트

int main() {

	int number = 0;
	int count = 1;

	scanf("%d", &number);

	vector<pair<int, int> > a(number);//동적 배열

	//입력
	for (int i = 0; i < number; i++)
	{
		scanf("%d", &a[i].first);
		a[i].second = i + 1;//원래 순서 저장
	}

	//정렬
	sort(a.begin(), a.end());//정렬

	int ans = 0;

	for (int i = 0; i < number; i++)//정렬된 순서와 원래 순서 비교해서 원래 순서 즉, 앞으로 간 것들을 비교.
	{
		if (i + 1 < a[i].second)
		{
			if ((a[i].second - (i + 1)) > ans)//제일 큰게 이동한 단계 값 저장
				ans = a[i].second - (i + 1);
		}

	}//for문 종료


	printf("%d\n", ans + 1);


	return 0;

}