#include <vector>
#include <iostream>

using namespace std;

int main(){

	int num;

	cin >> num;

	//������ ���� ����
	vector <int> a[3];


	//������ ���� �Է�
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < num; j++){
			int n;
			cin >> n;
			a[i].push_back(n);
		}
	}

	//������ ���� ���
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < num; j++){
			
			cout << a[i][j];
		}
	}
	

	
}
