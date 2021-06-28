#pragma warning(disable:4996)
#include<iostream>
#include<stdio.h>
using namespace std;

//char으로만 구현
int main(){
	char ch[8];
	scanf("%s", ch);
	
	//c~h
	int C_cnt = 0;
	for (; ch[C_cnt] != 'H'; C_cnt++) {
		
	}
	C_cnt--;
	ch[]


	//h~\0
	int H_cnt = 0;
	for (int i = 0; ch[i] != '\0'; i++) {
		printf("%c ", ch[i]);
	}

}