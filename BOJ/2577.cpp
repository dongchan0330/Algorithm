#include <stdio.h>
int main()
{
	int array[10000] = { 0, };
	int num1, num2, num3, mult = 1, rest = 1;
	scanf("%d %d %d", &num1, &num2, &num3);
	mult = num1 * num2 * num3;

	for (;;)
	{
		rest = mult % 10;
		mult = mult / 10;
		array[rest]++;
		if (mult == 0)
		{
			break;
		}
	}
	for (int j = 0; j < 10; j++)
	{
		printf("%d\n", array[j]);
	}
}
