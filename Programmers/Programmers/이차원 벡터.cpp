#include <vector>
#include <iostream>

using namespace std;

int main(){

	int num;

	cin >> num;

	//이차원 벡터 선언
	vector <int> a[3];


	//이차원 벡터 입력
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < num; j++){
			int n;
			cin >> n;
			a[i].push_back(n);
		}
	}

	//이차원 벡터 출력
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < num; j++){
			
			cout << a[i][j];
		}
	}
	

	
}
