#include <iostream>
#include <cstdio>
#include <stack>
#include <string>
using namespace std;

//��ȣ

//���ڿ��� �迭�� ��Ÿ�� �� �ִ�
string check(string s) {

	int count = 0;//���� ����, ���ÿ��� ���� ��ȣ�� ��
	int strSize = s.length();
	for (int i = 0; i < strSize; i++)
	{
		if (s[i] == '(')
			count = count + 1;
		else if (s[i] == ')')
			count = count - 1;

		if (count < 0)//�ݴ°�ȣ�� ���� ��ȣ���� �� ���� ��
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