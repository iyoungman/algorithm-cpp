/*
Top-down 방식은 큰 문제를 작은 문제로 나눈다.
주로 재귀호출을 이용함.
fibonacchi를 예로 구현
*/
int fibonacci(int n)
{
	int dp[100];

	if (n <= 1) {
		return n;
	}
	else {
		if (dp[n] > 0){//중복 호출이면 메모해 놓은것을 리턴
			return dp[n];
		}
		dp[n] = fibonacci(n - 1) + fibonacci(n - 2);
		return dp[n];
	}

}
