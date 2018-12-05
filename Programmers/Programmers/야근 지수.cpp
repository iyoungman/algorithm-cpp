#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int solution(int n, vector<int> works) {
	int answer = 0;
	int sum = 0;

	for (int i = 0; i<works.size(); i++){
		sum = sum + works[i];
	}

	if (n >= sum) return 0;



	//백터 거꾸로 정렬
	sort(works.begin(), works.end(), greater<int>());

	//반복문 돌면서 works 줄인다
	for (int i = 0; i<n; i++){
		for (int j = 0; j<works.size() - 1; j++)
		{
			if (works[j] != works[j + 1])
			{
				works[j] = works[j] - 1;
				break;
			}
			else if (j == works.size() - 2)//모두 같을때
				works[j + 1] = works[j + 1] - 1;

		}
	}

	for (int i = 0; i<works.size(); i++){
		answer = answer + (works[i] * works[i]);
	}

	return answer;
}


int main() {

	vector <int> works{ 1, 1 };
	int n = 4;

	int answer = solution(n, works);

	cout << answer << endl;

}