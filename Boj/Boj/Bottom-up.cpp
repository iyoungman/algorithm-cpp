/*
Bottom-up 방식은 작은 문제부터 모두 푼다.
주로 for문을 이용함.
fibonacchi를 예로 구현
*/

int fibonacci(int n)
{
	int dp[100];

	dp[0] = 0;
	dp[1] = 1;

	for (int i = 2; i <= n; i++)
	{
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	return dp[n];
}
