#include<stdio.h>
#include<string>
using namespace std;

int main() {
	//	int num,sum=0;
	//	int cnt=0,tmp;
	//	scanf("%d",&num);
	//	
	//	for(int i =1; i<=n; i++){
	//		tmp=i;
	//		while(tmp>0){
	//			tmp = tmp/10;
	//			cnt++;
	//		}
	//	}
	//	
	//		printf("%d\n",cnt);
	//		
	//	for(int i =1;i<=num;i++){
	//		//자릿수 구하기
	//		if(i/100000000!=0) sum+=9;
	//		else if(i/10000000!=0) sum+=8;
	//		else if(i/1000000!=0) sum+=7;
	//		else if(i/100000!=0) sum+=6;
	//		else if(i/10000!=0) sum+=5;
	//		else if(i/1000!=0) sum+=4;
	//		else if(i/100!=0) sum+=3;
	//		else if(i/10!=0) sum+=2;
	//		else sum+=1;
	//		}

	int n;
	scanf("%d", &n);
	int sum = 0, c = 1, d = 9, res = 0;

	//이 코드를 떠올렸다는게 point! 
	while (sum + d < n) {
		res = res + c * d;
		c++;
		sum = sum + d;
		d = d * 10;
	}

	res = res + (n - sum) * c;
	printf("%d\n", res);

	return 0;
}