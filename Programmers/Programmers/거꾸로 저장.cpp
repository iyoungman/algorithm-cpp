#include<iostream>

//자리수 거꾸로 출력
int main() {


	int Num;

	scanf("%d", &Num);

	int Remainder, Backwards = 0;

	while (Num){

		Remainder = Num % 10;
		Num = Num / 10;
		Backwards = Backwards * 10 + Remainder;

	}

	printf("%d\n", Backwards);

}