#pragma warning(disable:4996)
#include<iostream>
using namespace std;

int main() {
	int arr[10] = {0};
	char c[101];
	scanf("%s", c);

	for (int i = 0; c[i] != '\0'; i++){
		arr[c[i]-48]++;
	}

	int max = -1;
	int res = 0;
	for (int i = 0; i < 10; i++){
		if (max <= arr[i]) {
			max = arr[i];
			res = i;
		}
	}

	printf("%d", res);
}