#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

//���� ��Ʈ

int main() {

	int number = 0;
	int count = 1;

	scanf("%d", &number);

	vector<pair<int, int> > a(number);//���� �迭

	//�Է�
	for (int i = 0; i < number; i++)
	{
		scanf("%d", &a[i].first);
		a[i].second = i + 1;//���� ���� ����
	}

	//����
	sort(a.begin(), a.end());//����

	int ans = 0;

	for (int i = 0; i < number; i++)//���ĵ� ������ ���� ���� ���ؼ� ���� ���� ��, ������ �� �͵��� ��.
	{
		if (i + 1 < a[i].second)
		{
			if ((a[i].second - (i + 1)) > ans)//���� ū�� �̵��� �ܰ� �� ����
				ans = a[i].second - (i + 1);
		}

	}//for�� ����


	printf("%d\n", ans + 1);


	return 0;

}