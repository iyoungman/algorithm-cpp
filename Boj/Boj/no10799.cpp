#include <iostream>
#include <cstdio>
#include <stack>
#include <string>
using namespace std;

//�踷���

//���ڿ��� �迭�� ��Ÿ�� �� �ִ�
int check(string s) {

	int count = 0;//�߷� ������ ����� ũ��
	int strSize = s.length();

	stack<int> st;//���� ����

	for (int i = 0; i < strSize; i++)
	{
		if (s[i] == '(')
			st.push(i);
		else if (s[i] == ')')
		{
			if (st.top() == i - 1)//pop �ϸ� top�� �ִ°��� �ֱ�
			{
				st.pop();
				//������
				count = count + st.size();
			}

			else
			{
				st.pop();
				//�踷����� ��쿡�� +1
				count = count + 1;
			}

		}

	}

	return count;

}

int main() {


	string ps;//here
	cin >> ps;//not scanf

	cout << check(ps) << '\n';


	return 0;

}