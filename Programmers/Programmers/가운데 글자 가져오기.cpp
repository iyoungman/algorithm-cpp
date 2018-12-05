#include <string>
#include <vector>

using namespace std;

//substr(문자열에서 자르기 시작 위치(0부터 시작 주의), 자를 갯수)

string solution(string s) {
	int count = s.length();
	string answer = "";

	if (count % 2 == 0)//짝수 일때
		answer = s.substr(count / 2 - 1, 2);
	else
		answer = s.substr(count / 2, 1);

	return answer;
}