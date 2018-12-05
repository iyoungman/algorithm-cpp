#include <iostream>
using namespace std;

//최대공약수와 최소공배수


//유클리드 호제법
int gcd(int a, int b){

	while (b != 0)
	{
		int r = a%b;
		a = b;
		b = r;
	}

	//b은 0일때 a가 최대공약수
	return a;

}

int main() {

	int one, two;
	cin >> one >> two;
	cout << gcd(one, two) << '\n';
	cout << (one*two) / gcd(one, two) << '\n'; //A*B = L*G 이용

	return 0;

}