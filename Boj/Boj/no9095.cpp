#include <iostream>
#include <algorithm>
#include <stack>
#include <cstdio>
using namespace std;

//1,2,3 더하기

int d[11];//배열의 크기는 임의의 상수


int Add(int n)
{
	if (n == 0) return 1;//없는것을 1가지 방법으로 생각한다.
	if (n == 1) return 1;
	if (n == 2) return 2;

	if (n >= 3)
		d[n] = Add(n - 1) + Add(n - 2) + Add(n - 3);

	return d[n];
}


int main() {

	int n = 0;
	scanf("%d", &n);


	int number = 0;

	for (int i = 0; i < n; i++){
		cin >> number;
		cout << Add(number) << '\n';
	}

	return 0;

}