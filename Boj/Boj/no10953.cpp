#include <iostream>
using namespace std;

//A+B - 6

int main() {
	int number = 0;
	int a = 0, b = 0;
	char c;
	cin >> number;

	for (int i = 0; i<number; i++)
	{
		cin >> a >> c >> b;

		cout << a + b << endl;
	}

	return 0;
}