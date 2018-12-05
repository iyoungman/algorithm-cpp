#include <iostream>
#include <cstdio>
using namespace std;

//숫자의 합

int main() {
	int number = 0;
	int a = 0;
	int sum = 0;


	cin >> number;

	for (int i = 0; i<number; i++)
	{
		scanf("%1d", &a);

		sum = sum + a;
	}

	cout << sum << endl;

	return 0;
}