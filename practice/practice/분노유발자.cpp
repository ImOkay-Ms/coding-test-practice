#include<iostream>
#include<vector>
using namespace std;

int main() {

	int N, height;
	cin >> N;
	vector<int> arr;
	int max;
	//맨 마지막은 무조건 해당되기 때문에 -1 을 해주고 시작한다. 
	int cnt = 0;
	//배열에 담기 
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

	//출력
	cout << cnt;
}
