/*
Top-down ����� ū ������ ���� ������ ������.
�ַ� ���ȣ���� �̿���.
fibonacchi�� ���� ����
*/
int fibonacci(int n)
{
	int dp[100];

	if (n <= 1) {
		return n;
	}
	else {
		if (dp[n] > 0){//�ߺ� ȣ���̸� �޸��� �������� ����
			return dp[n];
		}
		dp[n] = fibonacci(n - 1) + fibonacci(n - 2);
		return dp[n];
	}

}
