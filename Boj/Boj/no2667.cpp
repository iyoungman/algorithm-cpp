#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <queue>
using namespace std;

//������ȣ���̱�

int a[100][100];
int check[100][100];
int dx[] = { 0, 0, 1, -1 };
int dy[] = { 1, -1, 0, 0 };
int size;
int ans[100];

void dfs(int x, int y, int cnt) {

	//üũ
	check[x][y] = cnt;

	for (int k = 0; k<4; k++) {
		int nx = x + dx[k];
		int ny = y + dy[k];

		if (0 <= nx && nx < size && 0 <= ny && ny < size) {
			if (a[nx][ny] == 1 && check[nx][ny] == 0) {
				dfs(nx, ny, cnt);
			}
		}
	}
}


int main() {

	scanf("%d", &size);

	//�Է�
	for (int i = 0; i < size; i++)
	{

		for (int j = 0; j < size; j++)
		{
			int number = 0;
			scanf("%1d", &number);

			a[i][j] = number;
		}
	}

	int cnt = 0;//������ȣ
	int connectedCount = 0;//������ ����

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (a[i][j] == 1 && check[i][j] == 0)//���� �湮���� ���� ���� ������
			{
				dfs(i, j, ++cnt);//�湮���� ���� ������ ����������
				connectedCount++;
			}
		}
	}

	//���� ��� ���� ���
	printf("%d\n", connectedCount);

	for (int k = 1; k <= connectedCount; k++)
	{
		int count = 0;

		for (int i = 0; i < size; i++)
		{

			for (int j = 0; j < size; j++)
			{
				if (check[i][j] == k)
				{
					count++;
				}
			}
		}

		ans[k] = count;
	}

	//�������� ����
	sort(ans + 1, ans + connectedCount + 1);
	for (int i = 1; i <= connectedCount; i++) {

		printf("%d\n", ans[i]);
	}

	return 0;

}