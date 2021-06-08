#include<vector>
#include<iostream>
using namespace std;

//연속 부분 증가수열 
int main() {
	int n, num;
	cin >> n;
	vector<int> arr;
	for (int i = 0; i < n; i++) {
		cin >> num;
		arr.push_back(num);
	}

	//vector의 처음부터 끝까지 
	int cnt = 0, max = -9999;
	for (int i = 0; i < arr.size() - 1; i++) {
		if (arr[i] <= arr[i + 1]) {
			cnt++;
			if (max < cnt) max = cnt;
		}
		else cnt = 0;
	}
	cout << ++max;
}