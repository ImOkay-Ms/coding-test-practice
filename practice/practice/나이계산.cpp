#include<stdio.h>
#include<string>
using namespace std;

//���̿� ������ �Ǵ��Ͽ� ����ϴ� ���α׷��� �ۼ��ϼ���.

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

//point �� char ���� ����� ���ڴ� ���� ���ڿ� 48�� ���̸� ������.
//char���� �ƽ�Ű�ڵ带 �̿��ϸ�  int��ó�� ������ �ִ�!

//1. char���迭�� �޾ƾ� �ڴٴ� ���� why? �װ԰������ ����̱� ����
//string ������ �޴´ٸ� ��� �ɱ�? �̰� �������غ�;