#include<iostream>
#include<cstring>
using namespace std;

int main() {
	int M, N, num;
	int cnt = 0, res = -1;
	bool bell = false;
	int max = -2147000000;
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> num;
		if (num > M&& bell != true) {
			bell = true;
			cnt = 1;
			if (res < cnt) res = cnt;
		}
		else if (num > M&& bell == true) {
			cnt++;
			if (res < cnt) res = cnt;
		}
		else {
			bell = false;
		}
	}

	//이게 더 간결함
	for (int i = 0; i < N; i++) {
		cin >> num;
		if (num > M) cnt++;
		else cnt = 0;
		if (cnt > max) max = cnt;
	}

	cout << res << endl;
	return 0;
}
