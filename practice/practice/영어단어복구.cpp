#include<stdio.h>
#include<string>
#include<cstring>
#include<iostream>
using namespace std;

//문자열 입력받아 공백제거하는 함수
string DeleteSpace(string s) {
	string res = "";
	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] != 32) {
			res += s[i];
		}
	}

	return res;
}

//문자열 입력받아 대문자로 변환하는 함수 
string UpperString(string s) {
	for (int i = 0; s[i] != '\0'; i++) {
		if (65 <= s[i] && s[i] <= 90) {
			s[i] = s[i] + 32;
		}
	}

	return s;
}

//int main(){
//	char a[100];
//	gets(a);
//	string s = UpperString(DeleteSpace(a));
//	cout << s;
//}



int main() {
	freopen("input.txt", "rt", stdin);
	char a[101], b[101];
	int i, p = 0;
	gets(a);
	for (int i = 0; a[i] != '\0'; i++) {
		if (a[i] != ' ') {
			if (65 <= a[i] && a[i] <= 90) {
				b[p++] = a[i] + 32;
			}
			else {
				b[p++] = a[i];
			}
		}
	}
	b[p] = '\0';
	printf("%s", b);
	return 0;
}
