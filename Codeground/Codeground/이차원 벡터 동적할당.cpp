#include <iostream>
#include <vector>

using namespace std;

//������ ���� �����Ҵ�(�� �ʿ��� ��쿡�� ����ϸ�
//�Ϲ������� ������ ũ�⸦ ����� ū ������ �����Ҵ� �ϴ°��� ���ϴ�

int main() {

	for (int i = 0; i < 2; i++){

		int num;
		cin >> num;

		//������ ���� ����
		vector<vector<int> > a(num, vector<int>(num, 0));

		//������ ���� �Է�
		for (int i = 0; i < num; i++){
			for (int j = 0; j < num; j++){
				int n;
				cin >> n;
				//a[i].push_back(n);
				a[i][j] = n;
			}
		}


		//������ ���� ���
		for (int i = 0; i < num; i++){
			for (int j = 0; j < num; j++){
				cout << a[i][j];
			}
		}

		//������ ���� �ʱ�ȭ
		for (int i = 0; i < num; i++){
			a[i].clear();
		}

	}
}
