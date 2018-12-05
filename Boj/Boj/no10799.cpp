#include <iostream>
#include <cstdio>
#include <stack>
#include <string>
using namespace std;

//쇠막대기

//문자열은 배열로 나타낼 수 있다
int check(string s) {

	int count = 0;//잘려 나가는 막대기 크기
	int strSize = s.length();

	stack<int> st;//스택 선언

	for (int i = 0; i < strSize; i++)
	{
		if (s[i] == '(')
			st.push(i);
		else if (s[i] == ')')
		{
			if (st.top() == i - 1)//pop 하면 top에 있는것이 최근
			{
				st.pop();
				//레이져
				count = count + st.size();
			}

			else
			{
				st.pop();
				//쇠막대기인 경우에도 +1
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