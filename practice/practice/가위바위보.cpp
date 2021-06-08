#pragma warning(disable:4996)
#include<iostream>
//가위 바위 보 

int main() {
	int n;
	scanf("%d", &n);

	int A[5];
	int B[5];

	for (int i = 0; i < n; i++) {
		scanf("%d", &A[i]);
	}
	for (int i = 0; i < n; i++) {
		scanf("%d", &B[i]);
	}

	for (int i = 0; i < n; i++) {
		if (A[i] == B[i]) printf("D\n");
		else if (A[i] == 1) {
			if (B[i] == 2) printf("B\n");
			else printf("A\n");
		}
		else if (A[i] == 2) {
			if (B[i] == 1) printf("A\n");
			else printf("B\n");
		}
		else {
			if (B[i] == 1) printf("B\n");
			else printf("A\n");
		}
	}
}