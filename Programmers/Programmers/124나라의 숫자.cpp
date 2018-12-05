#include <iostream>
#include <string>
#include <vector>

using namespace std;

//진법 변환 이용

string solution(int n) {
	string answer = "";

	vector <int> a;

	//vector a에 변환한 진법 저장
	do{
		int j = n % 3;

		if (j == 0){
			j = 4;//0->3->4
			n = n - 1;//자리수를 나타내는 0이 없기 때문에 3으로 나눠떨어지는 경우 몫에 1을 빼준다.ex)9 = 3*3 + 0 -> 3*(3-1)+3
		}

		a.push_back(j);

		n = n / 3;

		if (n == 0)break;

	} while (n >0);


	for (int i = a.size(); i >= 1; i--){
		string c = std::to_string(a[i - 1]);//int to string
		answer = answer + c;//string이어붙이기
	}

	return answer;
}


int main() {

	//변환할 수
	int n;
	cin >> n;

	cout << solution(n) << endl;

	return 0;
}