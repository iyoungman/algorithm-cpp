#include <cstdio>

//Ascii Test

int main() {

	char c;
	scanf("%c", &c);

	printf("����:%d ����:%c\n", c, c);

	int a = 10;

	printf("����10�� ���ڸ� ���� ���ڰ��� : %d\n", c + a);
	printf("����10�� ���ڸ� ���� ���ڰ��� : %c\n", c + a);
	printf("���ڿ� ���ڸ� ���� ���ڰ��� : %d\n", c + c);

	return 0;
}