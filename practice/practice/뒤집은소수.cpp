#pragma warning(disable:4996)
#include<iostream>
#include<string>
using namespace std;

int main() {
	int num;
	cin >> num;

	for (int i = 0; i < num; i++){
		//������
		char c[100000];
		char rc[100000];
		
		scanf("%s", c);
		int size = strlen(c);
		for (int j = 0; j<size; j++) {
			rc[j] = c[size-j-1];
		}

		//�����κ�ȯ
		string s(rc);
		int n = stoi(s);

		//�Ҽ��Ǻ�
		int cnt = 0;
		for (int j = 2; j < n; j++) {
			if (n % j == 0) {
				cnt++;
				break;
			}
		}

		//�迭 �ʱ�ȭ
		for (int j = 0; j < size; j++) {
			c[j] = 0;
			rc[j] = 0;
		}

		if (cnt == 0) printf("%d ", n);
	}
}