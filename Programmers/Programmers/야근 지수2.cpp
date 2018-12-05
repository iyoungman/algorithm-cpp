#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int solution(int n, vector<int> works) {
	int answer = 0;

	int index = max(works);

	//반복문 돌면서 works 줄인다/
	for (int i = 0; i<n; i++){
		for (int j = 0; j<works.size() - 1; j++)
		{
			if (works[j] != works[j + 1])
			{
				works[j] = works[j] - 1;
				break;
			}
			else if (j == works.size() - 2 && works[j + 1] != 0)//모두 같을떄
				works[j + 1] = works[j + 1] - 1;

		}
	}

	for (int i = 0; i<works.size(); i++){
		answer = answer + (works[i] * works[i]);
	}

	return answer;
}


int main() {

	vector <int> works{ 4, 3, 3 };
	int n = 4;

	int answer = solution(n, works);

	cout << answer << endl;

}