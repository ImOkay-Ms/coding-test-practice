#include<iostream>
using namespace std;

//������� ��
int main() {
	//���� �����
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