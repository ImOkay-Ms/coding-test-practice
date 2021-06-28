#include<string>
#include<iostream>
using namespace std;

int main() {
	int n;
	string s,s2;

	cin >> n;
	for (int i = 1; i <= n; i++) {
		s += to_string(i);
	}
	int cnt = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '3') { cnt++; }
	}

	cout << cnt;
}