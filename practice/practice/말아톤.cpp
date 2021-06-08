#include<stdio.h>
#include<vector>
using namespace std;

int main() {
	int n, rk, cnt = 0;
	vector<int> arr;
	vector<int> brr;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &rk);
		arr.push_back(rk);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (arr[j] > arr[i]) cnt++;

		}
		printf("%d", cnt + 1);
		cnt = 0;
	}

	return 0;
}
