#include <iostream>
#include <string>
#include <vector>

using namespace std;

//C++의 공백문자는 " ":x ' '로 처리해줘야 한다.

string solution(string s, int n) {
	string answer = "";

	int strSize = s.length();

	for (int i = 0; i<strSize; i++){
		if (s[i] == ' ')continue;
		//소문자 일떄
		else if (s[i] <= (int)'z' && s[i] >= (int)'a'){
			if ((int)s[i] + n>(int)'z'){
				s[i] = char(s[i] + n - 26); continue;
			}
			s[i] = char(s[i] + n);
		}//대문자 일때
		else {
			if ((int)s[i] + n > (int)'Z'){
				s[i] = char(s[i] + n - 26); continue;
			}
			s[i] = char(s[i] + n);
		}
		
	}

	answer = s;

	return answer;
}

int main() {

	string s = "T est";

	cout << solution(s, 3);
}