#include <iostream>
#include <string>
#include <vector>

using namespace std;

//���� ��ȯ �̿�

string solution(int n) {
	string answer = "";

	vector <int> a;

	//vector a�� ��ȯ�� ���� ����
	do{
		int j = n % 3;

		if (j == 0){
			j = 4;//0->3->4
			n = n - 1;//�ڸ����� ��Ÿ���� 0�� ���� ������ 3���� ������������ ��� �� 1�� ���ش�.ex)9 = 3*3 + 0 -> 3*(3-1)+3
		}

		a.push_back(j);

		n = n / 3;

		if (n == 0)break;

	} while (n >0);


	for (int i = a.size(); i >= 1; i--){
		string c = std::to_string(a[i - 1]);//int to string
		answer = answer + c;//string�̾���̱�
	}

	return answer;
}


int main() {

	//��ȯ�� ��
	int n;
	cin >> n;

	cout << solution(n) << endl;

	return 0;
}