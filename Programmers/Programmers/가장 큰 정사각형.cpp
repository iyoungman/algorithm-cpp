#include<vector>
#include <algorithm>
#include <iostream>
using namespace std;

//<algorithm> max,min함수 이용
//점화식 이용


int min(int x, int y, int z)
{
	int minimum = min(min(x, y), z);
	return minimum;
}

int solution(vector<vector<int>> board)
{
	int answer = 0;

	//1행 1열부터 탐색
	for (int i = 1; i<board.size(); i++){
		for (int j = 1; j<board[i].size(); j++){

			if (board[i][j] == 1){//왼쪽 대각선왼쪽 위 값중 최솟값 + 1
				board[i][j] = min(board[i][j - 1], board[i - 1][j - 1], board[i - 1][j]) + 1;
				answer = max(answer, board[i][j]);
			}
		}
	}

	answer = answer * answer;

	return answer;
}