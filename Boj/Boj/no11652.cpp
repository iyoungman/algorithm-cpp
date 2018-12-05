#include <cstdio>
#include <algorithm>
#include <vector>
#include <functional> // greater 사용 위해 필요 
using namespace std;

//카드

int main() {

	int number = 0;
	
	scanf("%d", &number);

	vector<int> a(number);//동적 배열
	vector<pair<int,int> > count;//정수의 count를 저장할 배열

	//입력
	for (int i = 0; i < number; i++)
	{
		scanf("%d", &a[i]);

	}

	//정렬
	sort(a.begin(), a.end());


	int cnt = 1;

	for (int i = 0; i < number-1; i++){
		if (a[i] == a[i + 1]){
			cnt++;
			if (i + 1 == number - 1)count.push_back(make_pair(cnt, a[i]));
		}
		else if (a[i] != a[i + 1]) {
			count.push_back(make_pair(cnt,a[i]));
			cnt = 1;
			if (i + 1 == number - 1)count.push_back(make_pair(cnt, a[i+1]));
		}
		
	}

	stable_sort(count.begin(), count.end());

	for (int i = 0; i < count.size(); i++){
		printf("하하%d %d\n", count[i].first, count[i].second);
	}

	//같은 count나올때는 숫자가 적은것 출력

	printf("%d\n", count[count.size()-1].second);
	
	return 0;

}