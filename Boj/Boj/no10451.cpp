#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <iostream>
using namespace std;

//���� ����Ŭ

//vector �� pair�� ���, pair: �� �ڷ����� �ϳ��� �����ִ� �� ��ǥ�� ����� �� ����ϸ� ���� 
//vector <"return �ڷ���" > ���� �̸�(ũ��)
//pair.first, pair.second
//dfs , bfs ��������Ʈ ver

vector <int> a;//������ ���� �� �ִ� ������ 1000�̹Ƿ� 1001���� ����, @2���� �迭�� ����
bool check[1001];//�� ������ �湮�ߴ����� ���� �迭�̹Ƿ� ���� �����迭�� ũ�Ⱑ ���� ����

void dfs(int x) {

	if (check[x]) return;//��� ������

	check[x] = true;
	//printf("%d ", x);

	int y = a[x - 1];//*******����

	dfs(y);//�����̹Ƿ� �׳� �ٷ� �湮


}

int main() {

	int number;

	scanf("%d", &number);

	for (int i = 0; i < number; i++)
	{
		a.clear();//*******���� �ʱ�ȭ
		memset(check, 0, sizeof(check));//check�ʱ�ȭ

		int n;//����

		scanf("%d", &n);


		//���� �Է�
		for (int i = 0; i < n; i++)
		{
			int u;//����
			cin >> u;//���ٿ� �Է��� ���� cin
			a.push_back(u);//�����̹Ƿ� ����� �ƴϴ�.
		}

		int connectedCount = 0;//���� ����Ŭ�� ����

		for (int i = 1; i <= n; i++)//����
		{
			if (check[i] == false)//���� �湮���� ���� ���� ������
			{
				dfs(i);//�湮���� ���� ������ ����������
				connectedCount++;
			}
		}

		printf("%d\n", connectedCount);

	}

	return 0;

}