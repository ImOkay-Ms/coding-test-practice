#pragma warning(disable:4996)
#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;

//자연수를 입력받아 약수를 출력받는 함수
void printNum(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) sum += 1;
	}
	printf(" %d", sum);
}

//문장에서 숫자만추출해 자연수를 출력하는 함수
int subtract(string s) {
	int res=0;
	for (int i = 0; s[i] != '\0'; i++) {
		if (47 < s[i] && s[i] < 58) {
			res = res * 10 + (s[i] - 48);
		}
	}
	printf("%d", res);
	return res;
}

int main() {
	//freopen("intput.txt", "rt", stdin);
	char s[50];
	scanf("%s", &s);
	printNum(subtract(s));
}
