#include<iostream>
using namespace std;

//�Ҽ��� ���� N < 200,000 
int main() {
	int n, cnt = 0;
	cin >> n;

	for (int i = 2; i <= n; i++) {
		for (int j = 2; j * j <= i; j++) {
			if (i % j == 0) {
				//�Ҽ��� �ƴ�
				cnt++;
				break;
			}
		}
	}

	cout << n - cnt - 1 << endl;
}

//n�� ������ ������ ������������ Ȯ���غ��� �ȴٴ°��� point ����!g