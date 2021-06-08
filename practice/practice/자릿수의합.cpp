#pragma warning(disable : 4996)
#include<stdio.h>
#include<string>
using namespace std;

//각 자연수의 자릿수의 합 
int digit_sum(int x) {
	int sum = 0;
	while (x > 0) {
		sum += x % 10;
		x = x / 10;
	}

	return sum;
}
int main() {
	int size;
	int N, idx;
	int max = -9999999;

	scanf("%d", &size);

	for (int i = 0; i < size; i++) {
		scanf("%d", &N);
		if (max < digit_sum(N)) {
			max = digit_sum(N);
			idx = N;
		}
		else if (max == digit_sum(N)) {
			if (idx < N) {
				idx = N;
			}
		}
	}

	printf("%d", idx);

}

