#include <iostream>
#include <string>
#include <vector>

using namespace std;

//dp문제
//Bottom-up방식

//int d[100];
vector <int> a;

long long solution(int n) {
	long long answer = 0;
	
	a.push_back(1);
	a.push_back(1);
	a.push_back(2);

	if (n == 1) return a[1];
	else if (n == 2) return a[2];
	else{

		for (int i = 3; i <= n; i++){

			int j = a[i - 1] + a[i - 2];
			a.push_back(j);
		}

		answer = a[n] % 1234567;
	}

	return answer;
}


int main() {

	int n;
	cin >> n;

	cout << solution(n) << endl;



	return 0;
}