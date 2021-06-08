#include<vector>
#include<iostream>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> arr;
	vector<int> ans;

	int num;

	for (int i = 0; i < n; i++) {
		cin >> num;
		arr.push_back(num);
	}

	int sum = 0;
	for (int i = 0; i < k; i++) {
		sum += arr[i];
	}
	//첫번쨰 ans는 넣고 시작 
	ans.push_back(sum);

	for (int i = 0; i + k < n; i++) {
		sum = sum - arr[i] + arr[i + k];
		ans.push_back(sum);
	}

	int max = -999999;

	for (int i = 0; i < n - k + 1; i++) {
		if (max < ans[i]) {
			max = ans[i];
		}
	}

	cout << max << endl;
}