#include<iostream>
#include<vector>
using namespace std;

int main() {

	int N, height;
	cin >> N;
	vector<int> arr;
	int max;
	//�� �������� ������ �ش�Ǳ� ������ -1 �� ���ְ� �����Ѵ�. 
	int cnt = 0;
	//�迭�� ��� 
	for (int i = 0; i < N; i++) {
		cin >> height;
		arr.push_back(height);
	}
	max = arr[N - 1];
	for (int i = N - 2; i >= 0; i--) {
		if (max < arr[i]) {
			max = arr[i];
			cnt++;
		}
	}

	//���
	cout << cnt;
}
