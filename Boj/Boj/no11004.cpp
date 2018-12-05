#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

//K번째 수

int main() {

	int number = 0;
	int order;

	scanf("%d %d", &number, &order);

	vector<int> a(number);//동적 배열

	//입력
	for (int i = 0; i < number; i++)
	{
		scanf("%d", &a[i]);

	}

	//정렬
	sort(a.begin(), a.end());


	//K번째 수 출력
	printf("%d\n", a[order - 1]);


	return 0;

}