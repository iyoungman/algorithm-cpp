#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <iostream>
using namespace std;

//텀 프로젝트

//vector 와 pair을 사용, pair: 두 자료형을 하나로 묶어주는 것 좌표를 사용할 때 사용하면 유용 
//vector <"return 자료형" > 변수 이름(크기)
//pair.first, pair.second
//dfs , bfs 인접리스트 ver

vector <int> a;//문제의 조건 중 최대 정점이 1000이므로 1001까지 설정, @2차원 배열과 같다
bool check[100001];//그 정점에 방문했는지에 대한 배열이므로 위의 정점배열과 크기가 같게 설정
int peopleCount;
int tempCount;
int selfCount;

void dfs(int x, int first) {

	if (check[x] == true && x == first) {
		peopleCount = peopleCount + tempCount;
		tempCount = 0;
		return;
	}//처음으로 순환할 경우

	else if (check[x] == true && x == a[x - 1] && selfCount == 0) {
		selfCount++;
		peopleCount++;
		tempCount = 0;
		return;
	}//자기자신 지목

	if (check[x]) {
		tempCount = 0;
		return;//재귀 끝내기
	}

	check[x] = true;

	int y = a[x - 1];//*******주의

	tempCount++;

	dfs(y, first);//순열이므로 그냥 바로 방문


}

int main() {

	int number;

	scanf("%d", &number);

	for (int i = 0; i < number; i++)
	{
		a.clear();//*******벡터 초기화
		memset(check, 0, sizeof(check));//check초기화
		peopleCount = 0;
		tempCount = 0;
		selfCount = 0;

		int n;//정점,학생

		scanf("%d", &n);


		//간선 입력
		for (int i = 0; i < n; i++)
		{
			int u;//간선
			cin >> u;//한줄에 입력할 때는 cin
			a.push_back(u);//순열이므로 양방향 아니다.
		}


		for (int i = 1; i <= n; i++)//정점
		{
			if (check[i] == false)//아직 방문하지 않은 정점 있으면
			{
				dfs(i, i);//방문하지 않은 정점을 시작점으로

			}
		}

		printf("%d\n", n - peopleCount);

	}

	return 0;

}