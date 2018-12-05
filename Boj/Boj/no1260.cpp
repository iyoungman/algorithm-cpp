#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <queue>
using namespace std;

//DFS와 BFS

//vector 와 pair을 사용, pair: 두 자료형을 하나로 묶어주는 것 좌표를 사용할 때 사용하면 유용 
//vector <"return 자료형" > 변수 이름(크기)
//pair.first, pair.second
//dfs , bfs 인접리스트 ver

vector <int> a[1001];//문제의 조건 중 최대 정점이 1000이므로 1001까지 설정, @2차원 배열과 같다
bool check[1001];//그 정점에 방문했는지에 대한 배열이므로 위의 정점배열과 크기가 같게 설정

void dfs(int x) {

	check[x] = true;
	printf("%d ", x);

	for (int i = 0; i<a[x].size(); i++)
	{
		int y = a[x][i];

		if (check[y] == false) {
			dfs(y);//방문하지 않은 곳 방문.
		}
	}

	//dfs 출력

}

void bfs(int x) {

	//check[1000] = { 0 }; //배열 전체 초기화
	memset(check, 0, sizeof(check));

	queue<int> q;
	check[x] = true; q.push(x);

	while (!q.empty()) {
		int x = q.front(); q.pop();
		printf("%d ", x);

		for (int i = 0; i < a[x].size(); i++)
		{
			int y = a[x][i];
			if (check[y] == false)//아직 방문하지 않은 곳이면
			{
				check[y] = true; q.push(y);
			}
		}
	}

}

int main() {

	int n, m, v;//정점,간선,시작 정점 번호

	scanf("%d %d %d", &n, &m, &v);


	//간선 입력
	for (int i = 0; i < m; i++)
	{
		int u, v;//간선
		scanf("%d %d", &u, &v);
		a[u].push_back(v); a[v].push_back(u);//a[u]=v와 같다, 양방향
	}

	//각 간선을 오름차순으로 정렬, 큰 차이는 모르겠음 
	for (int i = 1; i <= n; i++) {
		sort(a[i].begin(), a[i].end());
	}

	dfs(v);
	printf("\n");
	bfs(v);
	printf("\n");

	return 0;

}