//단순 for문을 이용한 풀이
#include<iostream>
#include<cstring>
using namespace std;

int main() {
	int n, pro, ans, sum;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> pro >> ans;
		sum = 0;

		for (int j = 1; j <= pro; j++) {
			sum += j;
		}

		if (ans == sum) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
}
