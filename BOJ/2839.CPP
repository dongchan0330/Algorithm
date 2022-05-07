#include <stdio.h>

int main()
{
	int input, cnt = 0;
	scanf_s("%d", &input);
	for (;;)
	{
		if (input % 5 == 0)
		{
			cnt += input / 5;
			printf("%d", cnt);
			break;
		}
		input = input - 3;
		cnt++;
		if (input < 0)
		{
			printf("-1\n");
			break;
		}
	}

}