#pragma warning(disable:4996)
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

int binarysearch(int lt, int rt, int key, vector<int> arr) {

	//종료조건 
	if (lt > rt) return -1;

	//search 시작 
	int mid = (lt + rt) / 2;
	if (arr[mid] == key) {
		return mid + 1;
	}
	else if (arr[mid] > key) {
		return binarysearch(lt, mid - 1, key, arr);
	}
	else {
		return binarysearch(mid + 1, rt, key, arr);
	}
}

int main() {
	int m, n, num;
	vector<int> arr;

	scanf("%d", &n);
	scanf("%d", &m);

	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		arr.push_back(num);
	}
	sort(arr.begin(), arr.end());
	int a = binarysearch(0, n - 1, m, arr);
	printf("%d", a);

	return 0;
}