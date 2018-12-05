#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <queue>
using namespace std;

//���� ����� ����

//vector �� pair�� ���, pair: �� �ڷ����� �ϳ��� �����ִ� �� ��ǥ�� ����� �� ����ϸ� ���� 
//vector <"return �ڷ���" > ���� �̸�(ũ��)
//pair.first, pair.second
//dfs , bfs ��������Ʈ ver

vector <int> a[1001];//������ ���� �� �ִ� ������ 1000�̹Ƿ� 1001���� ����, @2���� �迭�� ����
bool check[1001];//�� ������ �湮�ߴ����� ���� �迭�̹Ƿ� ���� �����迭�� ũ�Ⱑ ���� ����

void dfs(int x) {


	check[x] = true;
	//printf("%d ", x);

	for (int i = 0; i<a[x].size(); i++)
	{
		int y = a[x][i];

		if (check[y] == false) {
			dfs(y);//�湮���� ���� �� �湮.
		}
	}


}
//
//void bfs(int x) {
//
//	//check[1000] = { 0 }; //�迭 ��ü �ʱ�ȭ
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
//			if (check[y] == false)//���� �湮���� ���� ���̸�
//			{
//				check[y] = true; q.push(y);
//			}
//		}
//	}
//	
//}

int main() {

	int n, m;//����,����

	scanf("%d %d", &n, &m);


	//���� �Է�
	for (int i = 0; i < m; i++)
	{
		int u, v;//����
		scanf("%d %d", &u, &v);
		a[u].push_back(v); a[v].push_back(u);//�����
	}

	int connectedCount = 0;//������ ����

	for (int i = 1; i <= n; i++)//����
	{
		if (check[i] == false)//���� �湮���� ���� ���� ������
		{
			dfs(i);//�湮���� ���� ������ ����������
			connectedCount++;
		}
	}

	//dfs����: 125346
	printf("%d", connectedCount);

	return 0;

}