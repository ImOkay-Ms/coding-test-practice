#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

//insertion sort
int main() {
	int n, cnt = 0;
	scanf("%d", &n);

	int val, j;
	for (int i = n / 2; i >= 1; i--) {
		val = n;
		for (int j = i; j < n; j++) {
			val -= j;
			if (val == 0) {
				cnt++;
				//i~j까지 출력
				for (int k = i; k <= j; k++) {
					if (k == j) printf("%d", k);
					else printf("%d + ", k);
				}
				printf(" = %d\n", n);
			}
			else if (val < 0) {
				break;
			}
		}
	}
	printf("%d", cnt);
}