//���� ���ϱ�
//�� ������ point�� �迭�� a,b �ΰ����� �̿��Ͽ� Ǫ�°��̴�.
//2�� for������ n*n�� ����Ǹ� ������ ū ���� ������ ��� �� ����� +1 �ϴ� ��� 
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
