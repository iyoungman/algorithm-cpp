#include <iostream>
#include <vector>

using namespace std;

int main() {
	int num;
	vector<int> a;

	int count;
	scanf("%d", &count);

	//입력 개수 제한이 없을때 입력 후 벡터에 저장
	do {

		cin >> num;
		a.push_back(num);

	} while (getc(stdin) == ' ');

	//벡터 출력
	for (int i = 0; i < a.size(); i++)
	{
		printf("%d\n", a[i]);
	}


	return 0;
}