#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <iostream>
using namespace std;

//�� ������Ʈ

//vector �� pair�� ���, pair: �� �ڷ����� �ϳ��� �����ִ� �� ��ǥ�� ����� �� ����ϸ� ���� 
//vector <"return �ڷ���" > ���� �̸�(ũ��)
//pair.first, pair.second
//dfs , bfs ��������Ʈ ver

vector <int> a;//������ ���� �� �ִ� ������ 1000�̹Ƿ� 1001���� ����, @2���� �迭�� ����
bool check[100001];//�� ������ �湮�ߴ����� ���� �迭�̹Ƿ� ���� �����迭�� ũ�Ⱑ ���� ����
int peopleCount;
int tempCount;
int selfCount;

void dfs(int x, int first) {

	if (check[x] == true && x == first) {
		peopleCount = peopleCount + tempCount;
		tempCount = 0;
		return;
	}//ó������ ��ȯ�� ���

	else if (check[x] == true && x == a[x - 1] && selfCount == 0) {
		selfCount++;
		peopleCount++;
		tempCount = 0;
		return;
	}//�ڱ��ڽ� ����

	if (check[x]) {
		tempCount = 0;
		return;//��� ������
	}

	check[x] = true;

	int y = a[x - 1];//*******����

	tempCount++;

	dfs(y, first);//�����̹Ƿ� �׳� �ٷ� �湮


}

int main() {

	int number;

	scanf("%d", &number);

	for (int i = 0; i < number; i++)
	{
		a.clear();//*******���� �ʱ�ȭ
		memset(check, 0, sizeof(check));//check�ʱ�ȭ
		peopleCount = 0;
		tempCount = 0;
		selfCount = 0;

		int n;//����,�л�

		scanf("%d", &n);


		//���� �Է�
		for (int i = 0; i < n; i++)
		{
			int u;//����
			cin >> u;//���ٿ� �Է��� ���� cin
			a.push_back(u);//�����̹Ƿ� ����� �ƴϴ�.
		}


		for (int i = 1; i <= n; i++)//����
		{
			if (check[i] == false)//���� �湮���� ���� ���� ������
			{
				dfs(i, i);//�湮���� ���� ������ ����������

			}
		}

		printf("%d\n", n - peopleCount);

	}

	return 0;

}