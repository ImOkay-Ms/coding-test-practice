#include<iostream>
using namespace std;

//진약수의 합
int main() {
	//파일 입출력
	//freopen("input.txt", "rt", stdin); 

	int N, min = 9999, max = -9999;
	cin >> N;
	int M;

	for (int i = 0; i < N; i++) {
		cin >> M;
		if (min > M) {
			min = M;
		}
		if (max < M) {
			max = M;
		}
	}
	cout << max - min << endl;
	return 0;
}