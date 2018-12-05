#include <iostream>
using namespace std;

//A+B - 3

int main() {
	int number = 0;
	int a = 0, b = 0;
	cin >> number;

	for (int i = 0; i<number; i++)
	{
		cin >> a >> b;
		cout << a + b << endl;
	}

	return 0;
}