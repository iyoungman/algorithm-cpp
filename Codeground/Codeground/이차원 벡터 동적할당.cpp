#include <iostream>
#include <vector>

using namespace std;

//이차원 벡터 동적할당(꼭 필요한 경우에만 사용하며
//일반적으로 벡터의 크기를 충분히 큰 값으로 정적할당 하는것이 편하다

int main() {

	for (int i = 0; i < 2; i++){

		int num;
		cin >> num;

		//이차원 벡터 선언
		vector<vector<int> > a(num, vector<int>(num, 0));

		//이차원 벡터 입력
		for (int i = 0; i < num; i++){
			for (int j = 0; j < num; j++){
				int n;
				cin >> n;
				//a[i].push_back(n);
				a[i][j] = n;
			}
		}


		//이차원 벡터 출력
		for (int i = 0; i < num; i++){
			for (int j = 0; j < num; j++){
				cout << a[i][j];
			}
		}

		//이차원 벡터 초기화
		for (int i = 0; i < num; i++){
			a[i].clear();
		}

	}
}
