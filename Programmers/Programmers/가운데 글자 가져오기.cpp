#include <string>
#include <vector>

using namespace std;

//substr(���ڿ����� �ڸ��� ���� ��ġ(0���� ���� ����), �ڸ� ����)

string solution(string s) {
	int count = s.length();
	string answer = "";

	if (count % 2 == 0)//¦�� �϶�
		answer = s.substr(count / 2 - 1, 2);
	else
		answer = s.substr(count / 2, 1);

	return answer;
}