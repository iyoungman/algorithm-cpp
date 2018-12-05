#include <iostream>
#include <cstdio>
using namespace std;

//º°Âï±â - 1

int main() {

	int number;

	scanf("%d", &number);

	for (int i = 1; i <= number; i++)
	{
		for (int j = 0; j<i; j++)
			printf("*");

		printf("\n");
	}

	return 0;
}