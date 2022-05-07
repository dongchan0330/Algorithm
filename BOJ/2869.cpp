#include <stdio.h>
int main()
{
	int a, b, v, high = 0, cnt = 0;
	scanf_s("%d %d %d", &a, &b, &v);
	if ((v - a) % (a - b) != 0) {
		cnt = (v - a) / (a - b);
		cnt = cnt + 2;
	}
	else {
		cnt = (v - a) / (a - b);
		cnt = cnt + 1;
	}
	printf("%d", cnt);
}