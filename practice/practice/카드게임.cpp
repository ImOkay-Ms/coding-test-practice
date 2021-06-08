#pragma warning(disable:4996)
#include<iostream>
//가위 바위 보 

int main() {

	int A[10];
	int B[10];
	int A_cnt = 0, B_cnt = 0, D_cnt = 0;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &A[i]);
	}
	for (int i = 0; i < 10; i++) {
		scanf("%d", &B[i]);
	}

	for (int i = 0; i < 10; i++) {
		if (A[i] == B[i]) {
			A_cnt++;
			B_cnt++;
		}
		else if (A[i] > B[i]) {
			A_cnt += 3;
		}
		else {
			B_cnt += 3;
		}
	}
	printf("%d %d\n", A_cnt, B_cnt);
	if (A_cnt > B_cnt) {
		printf("A");
	}
	else if (A_cnt < B_cnt) {
		printf("B");
	}
	else {
		for (int i = 9; i >= 0; i--) {
			if (A[i] > B[i]) {
				printf("A");
				return 0;
			}
			else if (A[i] < B[i]) {
				printf("B");
				return 0;
			}
		}
		printf("D");
	}

}