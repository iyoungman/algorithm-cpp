#include <iostream>
#include <vector>

using namespace std;

int Answer;
vector <int> v;

int main(int argc, char** argv)
{
	int T, test_case;

	cin >> T;

	for (test_case = 0; test_case < T; test_case++)
	{

		Answer = 0;
		/////////////////////////////////////////////////////////////////////////////////////////////
		int number;//������ ������ ����
		cin >> number;

		v.push_back(0);//���� ��ġ

		//���Ϳ� ���� ��ġ ����
		for (int i = 0; i < number; i++){
			int j;
			cin >> j;
			v.push_back(j);
		}

		//�ִ� ���� �Ÿ�
		int jump;
		cin >> jump;

		//�� �������� Ž��
		int k=0;
		int count = 0;

		for (int i = 0; i < v.size()-1; i++){

			if (v[i] + jump < v[i + 1]) {
				Answer = -1; break;
			}

		}

		while (k<v.size()&& Answer!=-1 ){

			
			for (int j = 1; ; j++){ 
				if (k + j >= v.size()) { count = count + j - 1; Answer++; break; }
				else if (v[k] + jump >= v[k + j]) continue;
					else { count = count + j - 1; Answer++; break; }
			}
			
			k = count;

			if (k == v.size() - 1)
				break;
		}







		/////////////////////////////////////////////////////////////////////////////////////////////

		// Print the answer to standard output(screen).
		cout << "Case #" << test_case + 1 << endl;
		cout << Answer << endl;
	}

	return 0;
}