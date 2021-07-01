#pragma warning(disable:4996)
#include<stdio.h>
#include<vector>
#include<iostream>
using namespace std;

//insertion sort
int main() {
	int n, size1, size2;
	int num;
	vector<int> arr1;
	vector<int> arr2;
	vector<int> arr3;

	//배열값 입력받기 
	scanf("%d", &size1);
	for (int i = 0; i < size1; i++) {
		scanf("%d", &num);
		arr1.push_back(num);
	}

	scanf("%d", &size2);
	for (int i = 0; i < size2; i++) {
		scanf("%d", &num);
		arr2.push_back(num);
	}

	int pos1 = 0, pos2 = 0;
	while (pos1 < size1 && pos2 < size2) {
		if (arr1[pos1] <= arr2[pos2]) {
			arr3.push_back(arr1[pos1]);
			pos1++;
		}
		else {
			arr3.push_back(arr2[pos2]);
			pos2++;
		}
	}
	if (pos1 == size1) {
		while (pos2 < size2) {
			arr3.push_back(arr2[pos2]);
			pos2++;
		}
	}
	else {
		while (pos1 < size1) {
			arr3.push_back(arr1[pos1]);
			pos1++;
		}
	}

	for (int i = 0; i < size1 + size2; i++) {
		printf("%d ", arr3[i]);
	}
}