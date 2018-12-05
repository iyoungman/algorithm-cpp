#include <iostream>
#include <vector>

using namespace std;

int Answer;

int size;
int cur1, cur2;//현재 좌표
int temp;
int mcount;

bool check[100][100];


//x축 이동, y축 이동, 전 거울의 번호
void search(int x, int y, vector<vector<int> > a) {

	cur1 = cur1 + x;
	cur2 = cur2 + y;

	//벡터의 범위 지정
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
		else{//2일때
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

		//////////초기화
		Answer = 0;
		
		cur1 = 0; cur2 = -1;//현재 좌표
		temp = 0;
		mcount = 0;
		////////////


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


		search(0, 1,a);
		Answer = mcount;

		//이차원 벡터 초기화
		for (int i = 0; i < num; i++){
			a[i].clear();
		}

		//배열 초기화
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