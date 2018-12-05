#include <cstdio>
#include <iostream>
using namespace std;

//Ʈ���� ��ȸ
//pre-order,in-orer,post-order
//a[i][0]:i�� ���� �ڽ�, a[i][1]: i�� ������ �ڽ�
//�ƽ�Ű �ڵ� : ���ڷ� ���ڸ� ǥ���ϱ� ���� (A:65)
//scanf�� ������� fflush(stdin)���� ���� ��� �ʰ��� ����.

int a[50][2];//string�� �ƴ� int�� ����

//x : �� ��Ʈ ���

void preOrder(int x) {

	if (x == -1) return;

	cout << (char)(x + 'A');

	preOrder(a[x][0]);
	preOrder(a[x][1]);

}

void inOrder(int x) {

	if (x == -1) return;


	inOrder(a[x][0]);
	cout << (char)(x + 'A');

	inOrder(a[x][1]);

}

void postOrder(int x) {

	if (x == -1) return;

	postOrder(a[x][0]);
	postOrder(a[x][1]);

	cout << (char)(x + 'A');

}

int main() {

	int n;//���� ����

	cin >> n;



	//����Ʈ�� �ڽ�, ���� �ڽ�, ������ �ڽ� �Է�
	for (int i = 0; i < n; i++)
	{
		char x, y, z;
		cin >> x >> y >> z;


		x = x - 'A';


		if (y == '.'){
			a[(int)x][0] = -1;
		}
		else{
			a[x][0] = (int)(y - 'A');
		}

		if (z == '.'){
			a[x][1] = -1;
		}
		else{
			a[x][1] = (int)(z - 'A');
		}

	}


	preOrder(0); cout << "\n";

	inOrder(0); cout << "\n";

	postOrder(0); cout << "\n";

	return 0;

}