#pragma warning(disable:4996)
#include<iostream>
#include<algorithm>
using namespace std;

//아나그램 -> 정렬이 필요할듯 
int main(){
	char a[100];
	char b[100];
	
	scanf("%s",a);
	scanf("%s",b);
	int length = strlen(a);

	//정렬구현
	//selection sort
	int temp,idx;
	for (int i = 0; i < length; i++){
		int min = a[i];
		idx = i;
		for (int j = i+1; j < length; j++){
			if (a[j] < min){
				min = a[j];
				idx = j;
			}
		}
		temp = a[idx];
		a[idx] = a[i];
		a[i] = temp;
	}

	for (int i = 0; i < length; i++) {
		int min = b[i];
		idx = i;
		for (int j = i + 1; j < length; j++) {
			if (b[j] < min) {
				min = b[j];
				idx = j;
			}
		}
		temp = b[idx];
		b[idx] = b[i];
		b[i] = temp;
	}

	for(int i =0; i<length; i++){
		if(a[i]!=b[i]) {
			printf("NO");
			return 0;
		}
	}
	printf("YES");
	return 0;
}
