#include <string>
#include <vector>

using namespace std;

int count(int n) {
	int cnt = 0;

	do{
		if (n % 2 == 1) cnt++;

		n = n / 2;

	} while (n >1);//while�� ����, ���� ���ǵ��� �ݺ�

	return cnt + 1;
}


int solution(int n) {

	int ref = count(n);

	do{
		n++;
	} while (ref != count(n));

	int answer = n;

	return answer;
}