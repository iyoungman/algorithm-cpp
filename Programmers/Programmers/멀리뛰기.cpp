#include <iostream>
#include <string>
#include <vector>

using namespace std;

//dp문제
//Bottom-up방식

int d[2000];


long long solution(int n) {
	d[0] = 1;//수가 없는것도 하나의 수로 본다.
	d[1] = 1;

	if (n == 1) return 1;

	long long answer = 0;
	
	for (int i = 2; i <= n; i++){

		d[i] = d[i - 1] + d[i - 2];
	}

	answer = d[n] % 1234567;
	
	return answer;
}


int main() {

	int n;
	cin >> n;

	cout << solution(n) << endl;

	return 0;
}