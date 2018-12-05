#include <cstdio>

//Ascii Test

int main() {

	char c;
	scanf("%c", &c);

	printf("숫자:%d 문자:%c\n", c, c);

	int a = 10;

	printf("숫자10과 문자를 더한 숫자값은 : %d\n", c + a);
	printf("숫자10과 문자를 더한 문자값은 : %c\n", c + a);
	printf("문자와 문자를 더한 숫자값은 : %d\n", c + c);

	return 0;
}