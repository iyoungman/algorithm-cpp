#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> a;

int odd(string s, int strLength){
	int ans;

	for (int i = 1; i < strLength - 2; i++){
		for (int j = 1;; j++){

			if (i - j < 0 || i + j > strLength){
				break;
			}
			else if (s[i - j] == s[i + j] && i - j >= 0 && i + j<strLength){
				//���Ϳ� �ְ� ���� ū �� ��ȯ
				a.push_back(j);
			}
			else break;
		}
	}

	ans = *max_element(a.begin(), a.end());
	ans = ans * 2 + 1;

	return ans;
}

int even(string s,int strLength){
	int ans;

	if (s[strLength / 2] == s[strLength / 2]-1)

	for (int i = 1; i < strLength - 2; i++){
		for (int j = 1;; j++){

			if (i - j < 0 || i + j > strLength){
				break;
			}
			else if (s[i - j] == s[i + j] && i - j >= 0 && i + j<strLength){
				//���Ϳ� �ְ� ���� ū �� ��ȯ
				a.push_back(j);
			}
			else break;
		}
	}

	ans = *max_element(a.begin(), a.end());
	ans = ans * 2 + 1;

	return ans;
}

int solution(string s) {
	int answer = 0;

	int strLength = s.length();

	//Ȧ�� �� ���
	if (strLength%2==1){
		answer = odd(s,strLength);
	}
	else//¦�� �� ���
		answer = even(s, strLength);

	return answer;
}

int main() {

	string str = "abacdee";

	cout << solution(str) << endl;

}