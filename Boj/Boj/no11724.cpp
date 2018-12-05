#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <queue>
using namespace std;

//연결 요소의 개수

//vector 와 pair을 사용, pair: 두 자료형을 하나로 묶어주는 것 좌표를 사용할 때 사용하면 유용 
//vector <"return 자료형" > 변수 이름(크기)
//pair.first, pair.second
//dfs , bfs 인접리스트 ver

vector <int> a[1001];//문제의 조건 중 최대 정점이 1000이므로 1001까지 설정, @2차원 배열과 같다
bool check[1001];//그 정점에 방문했는지에 대한 배열이므로 위의 정점배열과 크기가 같게 설정

void dfs(int x) {


	check[x] = true;
	//printf("%d ", x);

	for (int i = 0; i<a[x].size(); i++)
	{
		int y = a[x][i];

		if (check[y] == false) {
			dfs(y);//방문하지 않은 곳 방문.
		}
	}


}
//
//void bfs(int x) {
//
//	//check[1000] = { 0 }; //배열 전체 초기화
//	
//	queue<int> q;
//	check[x] = true; q.push(x);
//
//	while (!q.empty()) {
//		int x = q.front(); q.pop();
//		printf("%d ", x);
//
//		for (int i = 0; i < a[x].size(); i++)
//		{
//			int y = a[x][i];
//			if (check[y] == false)//아직 방문하지 않은 곳이면
//			{
//				check[y] = true; q.push(y);
//			}
//		}
//	}
//	
//}

int main() {

	int n, m;//정점,간선

	scanf("%d %d", &n, &m);


	//간선 입력
	for (int i = 0; i < m; i++)
	{
		int u, v;//간선
		scanf("%d %d", &u, &v);
		a[u].push_back(v); a[v].push_back(u);//양방향
	}

	int connectedCount = 0;//연결요소 개수

	for (int i = 1; i <= n; i++)//정점
	{
		if (check[i] == false)//아직 방문하지 않은 정점 있으면
		{
			dfs(i);//방문하지 않은 정점을 시작점으로
			connectedCount++;
		}
	}

	//dfs순서: 125346
	printf("%d", connectedCount);

	return 0;

}