#include<stdio.h>
#include<string>
using namespace std;

int arr[100001];

int main() {
	int num, sum = 0;
	int cnt = 0, tmp;
	scanf("%d", &num);

	for (int i = 1; i <= n; i++) {
		tmp = i;
		while (tmp > 0) {
			tmp = tmp / 10;
			cnt++;
		}
	}

	printf("%d\n", cnt);

	//하나씩 해보는방법 
//	for(int i =1;i<=num;i++){
//		//자릿수 구하기
//		if(i/10000!=0) sum+=5;
//		else if(i/1000!=0) sum+=4;
//		else if(i/100!=0) sum+=3;
//		else if(i/10!=0) sum+=2;
//		else sum+=1;
//		}

	return 0;
}