#include <iostream>
#include <string>
#include <vector>

using namespace std;

//C++�� ���鹮�ڴ� " ":x ' '�� ó������� �Ѵ�.

string solution(string s, int n) {
	string answer = "";

	int strSize = s.length();

	for (int i = 0; i<strSize; i++){
		if (s[i] == ' ')continue;
		//�ҹ��� �ϋ�
		else if (s[i] <= (int)'z' && s[i] >= (int)'a'){
			if ((int)s[i] + n>(int)'z'){
				s[i] = char(s[i] + n - 26); continue;
			}
			s[i] = char(s[i] + n);
		}//�빮�� �϶�
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