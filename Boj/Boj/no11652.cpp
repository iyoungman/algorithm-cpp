#include <cstdio>
#include <algorithm>
#include <vector>
#include <functional> // greater ��� ���� �ʿ� 
using namespace std;

//ī��

int main() {

	int number = 0;
	
	scanf("%d", &number);

	vector<int> a(number);//���� �迭
	vector<pair<int,int> > count;//������ count�� ������ �迭

	//�Է�
	for (int i = 0; i < number; i++)
	{
		scanf("%d", &a[i]);

	}

	//����
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
		printf("����%d %d\n", count[i].first, count[i].second);
	}

	//���� count���ö��� ���ڰ� ������ ���

	printf("%d\n", count[count.size()-1].second);
	
	return 0;

}