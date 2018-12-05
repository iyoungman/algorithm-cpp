#include <iostream>
#include <cstdio>
#include <stack>
#include <string>
using namespace std;

//괄호

//문자열은 배열로 나타낼 수 있다
string check(string s) {

	int count = 0;//스택 갯수, 스택에는 여는 괄호가 들어감
	int strSize = s.length();
	for (int i = 0; i < strSize; i++)
	{
		if (s[i] == '(')
			count = count + 1;
		else if (s[i] == ')')
			count = count - 1;

		if (count < 0)//닫는괄호가 여는 괄호보다 더 많을 때
			return "NO";
	}

	if (count == 0)
		return "YES";
	else
		return "NO";

}

int main() {

	int number = 0;

	scanf("%d", &number);

	for (int i = 0; i < number; i++)
	{
		string ps;//here
		cin >> ps;//not scanf

		cout << check(ps) << '\n';
	}

	return 0;

}