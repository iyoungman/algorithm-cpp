#include <iostream>
#include <vector>

using namespace std;

int main() {
	int num;
	vector<int> a;

	int count;
	scanf("%d", &count);

	//�Է� ���� ������ ������ �Է� �� ���Ϳ� ����
	do {

		cin >> num;
		a.push_back(num);

	} while (getc(stdin) == ' ');

	//���� ���
	for (int i = 0; i < a.size(); i++)
	{
		printf("%d\n", a[i]);
	}


	return 0;
}