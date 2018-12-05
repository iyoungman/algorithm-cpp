#include <iostream>
#include <vector>

using namespace std;

int Answer;

int size;
int cur1, cur2;//���� ��ǥ
int temp;
int mcount;

bool check[100][100];


//x�� �̵�, y�� �̵�, �� �ſ��� ��ȣ
void search(int x, int y, vector<vector<int> > a) {

	cur1 = cur1 + x;
	cur2 = cur2 + y;

	//������ ���� ����
	if (0 <= cur1 && cur1 < size && 0 <= cur2 && cur2 < size){

		if (a[cur1][cur2] == 0){
			search(x, y, a);
		}
		else if (a[cur1][cur2] == 1){
			if (check[cur1][cur2] == false)
			{
				check[cur1][cur2] = true; mcount++;
			}
			temp = x; x = -y; y = -temp; search(x, y, a);
			
		}
		else{//2�϶�
			if (check[cur1][cur2] == false)
			{
				check[cur1][cur2] = true; mcount++;
			}
			temp = x; x = y; y = temp;  search(x, y, a);
			
		}
	}
	else return;

}
	
int main(int argc, char** argv)
{
	int T, test_case;
	
	cin >> T;

	for (test_case = 0; test_case < T; test_case++)
	{
		int num;
		cin >> num;

		size = num;

		//////////�ʱ�ȭ
		Answer = 0;
		
		cur1 = 0; cur2 = -1;//���� ��ǥ
		temp = 0;
		mcount = 0;
		////////////


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


		search(0, 1,a);
		Answer = mcount;

		//������ ���� �ʱ�ȭ
		for (int i = 0; i < num; i++){
			a[i].clear();
		}

		//�迭 �ʱ�ȭ
		for (int i = 0; i < num; i++){
			for(int j = 0; j < num; j++)
			check[i][j] = false;
		}
		

		// Print the answer to standard output(screen).
		cout << "Case #" << test_case + 1 << endl;
		cout << Answer << endl;
	}

	return 0;
}