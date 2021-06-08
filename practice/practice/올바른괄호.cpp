#include<stdio.h>

int main() {
	char a[31];
	scanf("%s", a);

	int cnt = 0;
	//올바른 괄호인지 확인
	for (int i = 0; a[i] != '\0'; i++) {
		if (a[i] == '(') cnt++;
		else if (a[i] == ')') cnt--;
		if (cnt < 0) break;
	}
	if (cnt != 0) printf("NO\n");
	else printf("YES\n");
	return 0;
}