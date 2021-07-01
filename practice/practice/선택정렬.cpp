#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

//insertion sort
int main() {
	int n;
	int num;
	vector<int> arr;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		arr.push_back(num);
	}

	int min;
	int idx;
	int tmp;
	for (int i = 0; i < n - 1; i++) {
		min = 999;
		for (int j = i; j < n; j++) {
			if (arr[j] < min) {
				min = arr[j];
				idx = j;
			}
		}
		tmp = arr[i];
		arr[i] = min;
		arr[idx] = tmp;
	}

	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
}