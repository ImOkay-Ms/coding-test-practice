#include<iostream>
using namespace std;

//소수의 개수 N < 200,000 
int main() {
	int n, cnt = 0;
	cin >> n;

	for (int i = 2; i <= n; i++) {
		for (int j = 2; j * j <= i; j++) {
			if (i % j == 0) {
				//소수가 아님
				cnt++;
				break;
			}
		}
	}

	cout << n - cnt - 1 << endl;
}

//n의 제곱근 까지만 나누어지는지 확인해보면 된다는것이 point 였다!g