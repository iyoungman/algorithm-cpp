#include <iostream>
#include <cstdio>
#include <stack>
#include <string>
using namespace std;

//������

void check(string s) {

	int strSize = s.length();

	stack<char> left;//���� ����
	stack<char> right;//���� ����

	for (int i = 0; i < strSize; i++)
	{
		left.push(s[i]);//abcd
	}

	int number;
	cin >> number;


	for (int i = 0; i < number; i++)
	{
		char command;
		cin >> command;

		if (command == 'L')
		{
			if (!left.empty()) {
				char a = left.top();
				right.push(a);
				left.pop();
			}
		}
		else if (command == 'D')
		{
			if (!right.empty()){
				char a = right.top();
				left.push(a);
				right.pop();
			}
		}
		else if (command == 'B')
		{
			if (!left.empty()) {
				left.pop();
			}
		}
		else if (command == 'P')
		{
			char c;
			scanf(" %c", &c);//Point
			left.push(c);
		}

	}

	//left �� right �� ���ļ� ���
	while (!left.empty()){

		//	char a = left.top();
		right.push(left.top());
		left.pop();
	}

	while (!right.empty()) {

		printf("%c", right.top());//top���� �ϳ��� ������
		right.pop();
	}

	printf("\n");


}


int main() {

	string ps;//here
	cin >> ps;//not scanf

	check(ps);

	return 0;

}