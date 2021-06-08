//석차 구하기
//이 문제의 point는 배열을 a,b 두가지를 이용하여 푸는것이다.
//2중 for문에서 n*n번 진행되며 나보다 큰 값이 존재할 경우 내 등수를 +1 하는 방법 
#pragma warning(disable:4996)
#include<stdio.h>
int main() {
	int n, score, a[200], b[200];
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &score);
		a[i] = score;
		b[i] = 1;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[j] > a[i]) b[i]++;
		}
	}

	for (int i = 0; i < n; i++) {
		printf("%d ", b[i]);
	}
}
