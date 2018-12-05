#include <cstdio>
#include <iostream>
#include <math.h>
using namespace std;

//�ݺ�����

//���� �ʿ����.
int check[250000];//�� ������ �湮�ߴ����� ���� �迭, ������ bool�������� ���° �湮�� ���� ���� ���ϴ� �����̹Ƿ� int��
////�迭 ũ��� ���� ������ ���� ���� �� �ִ� �ִ�� : (9�� 5���� * 4) �� �뷫������ ����
int nextNumber(int x, int square){
	int next = 0;

	//�� �ڸ����� ������ ���� ���ϴ� �ڵ�
	while (x != 0){
		next = next + int(pow(x % 10, square));
		x = x / 10;
	}

	return next;
}



int dfs(int x, int square, int order) {

	if (check[x] != 0) return check[x];//��� ������

	check[x] = order;//*******check[x]���� �迭 ���� x�� �������ڸ� �ǹ��ϰ�(���� �����ƴ�)

	int y = nextNumber(x, square);

	return dfs(y, square, order + 1);//�湮,���(���� int ���� count�� ���Ҷ� ���� ��� ����),�ᱹ�� �� ���� int���̱� ������ return ����

}

int main() {

	int n;//����
	int square;//����

	scanf("%d %d", &n, &square);

	int count = dfs(n, square, 1);//����,����,����

	printf("%d\n", count - 1);

	return 0;

}