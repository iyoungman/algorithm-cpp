#include <iostream>
using namespace std;

//������

int main() {

	int one, two, three = 0;
	cin >> one >> two >> three;
	cout << (one + two) % three << '\n';
	cout << (one%three + two%three) % three << '\n';
	cout << (one * two) % three << '\n';
	cout << ((one%three) * (two%three)) % three << '\n';

	return 0;

}