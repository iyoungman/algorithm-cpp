#include <cstdio>
#include <iostream>
using namespace std;

//트리의 순회
//pre-order,in-orer,post-order
//a[i][0]:i의 왼쪽 자식, a[i][1]: i의 오른쪽 자식
//아스키 코드 : 숫자로 문자를 표현하기 위함 (A:65)
//scanf로 했을경우 fflush(stdin)으로 인해 출력 초과가 났다.

int a[50][2];//string이 아닌 int로 선언

//x : 각 루트 노드

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

	int n;//정점 개수

	cin >> n;



	//이진트리 자신, 왼쪽 자식, 오른쪽 자식 입력
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