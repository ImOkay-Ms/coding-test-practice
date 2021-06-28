#include<string>
#include<iostream>
using namespace std;

int main() {
	int n;
	string s, s2;

	cin >> n;
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		s = to_string(i);
		for (int j = 0; j < s.length(); j++) {
			if (s[j] == '3') { cnt++; }
		}
	}

	cout << cnt;
}