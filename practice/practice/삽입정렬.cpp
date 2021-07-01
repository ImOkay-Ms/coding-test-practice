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
	int j;
	int tmp;
	for (int i = 1; i < n; i++) {
		tmp = arr[i];
		for (j = i - 1; j >= 0; j--) {
			if (arr[j] > tmp) {
				arr[j + 1] = arr[j];
			}
			else {
				break;
			}
		}
		arr[j + 1] = tmp;
	}

	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
}