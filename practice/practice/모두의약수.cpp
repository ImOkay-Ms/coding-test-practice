#include<stdio.h>
int arr[50001];

int main() {
	int N, sum = 0;
	scanf("%d", &N);


	for (int i = 1; i <= N; i++) {
		for (int j = i; j <= N; j += i) {
			arr[j] += 1;
		}
		printf("%d ", arr[i]);
	}

	return 0;
}