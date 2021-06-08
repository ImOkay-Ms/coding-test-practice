#include<stdio.h>
#include<string>
using namespace std;

//나이와 성별을 판단하여 출력하는 프로그램을 작성하세요.

int main() {
	//freopen("input.txt","rt",stdin);
	int year, age;
	char a[20];

	scanf("%s", &a);
	if (a[7] == '1' || a[7] == '2') year = 1900 + ((a[0] - 48) * 10 + (a[1] - 48));
	else year = 2000 + ((a[0] - 48) * 10 + (a[1] - 48));

	age = 2019 - year + 1;
	printf("%d", age);

	if (a[7] == '1' || a[7] == '3') printf("M\n");
	else printf(" W\n");
}

//point 는 char 형에 저장된 숫자는 실제 숫자와 48의 차이를 가진다.
//char형을 아스키코드를 이용하면  int형처럼 쓸수가 있다!

//1. char형배열로 받아야 겠다는 생각 why? 그게가장빠른 방법이기 때문
//string 형으로 받는다면 어떻게 될까? 이건 생각안해봄;