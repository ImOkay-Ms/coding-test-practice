#pragma warning(disable:4996)
#include<stdio.h>
#include<vector>
#include<cstring>
using namespace std;

int main() {
	int arr[1001], ans[1001];
	int n;
	scanf("%d", &n);

	//brr�� 101���� �Ҽ� �Է��ϱ�
	vector<int> brr;
	int num = 1001;
	bool jd = true;
	for (int i = 2; i <= num; i++) {
		for (int j = 2; j * j <= i; j++) {
			if (i % j == 0) {
				jd = false;
				break;
			}
		}
		if (jd == true) {
			brr.push_back(i);
		}
		jd = true;
	}

	//ans �ʱ�ȭ
	memset(ans, 0, sizeof(arr));

	//arr�� 1~n���� ����ֱ� 
	for (int i = 0; i < n; i++) {
		arr[i] = i + 1;
	}

	//arr �� brr�� ������
	int j = 0;
	for (int i = 0; i < n; i++) {
		while (arr[i] != 1) {
			if (arr[i] % brr[j] == 0) {
				arr[i] = arr[i] / brr[j];
				ans[j]++;
			}
			else {
				j++;
			}
		}
		j = 0;
	}

	printf("%d! = ", n);
	for (int i = 0; ans[i] != 0; i++) {
		printf("%d ", ans[i]);
	}

	return 0;
}
