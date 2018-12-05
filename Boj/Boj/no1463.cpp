#include <iostream>
using namespace std;

//1로 만들기

//Top-down = 재귀호출
int d[10000];//배열의 크기는 임의의 상수

int makeOne(int n)
{

	if (n == 1) return 0;

	d[n] = makeOne(n - 1) + 1;

	if (n % 2 == 0)
	{
		int temp = makeOne(n / 2) + 1;
		if (d[n] > temp)//위의 d[n]가 비교, d[n]은 최소횟수이므로
		{
			d[n] = temp;
		}
	}

	if (n % 3 == 0)
	{
		int temp = makeOne(n / 3) + 1;
		if (d[n] > temp)//위의 d[n]가 비교, d[n]은 최소횟수이므로
		{
			d[n] = temp;
		}
	}

	return d[n];
}


int main() {

	int number = 0;
	cin >> number;
	cout << makeOne(number) << '\n';

	return 0;

}