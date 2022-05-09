#include <stdio.h>
int main()
{
	int t, k, n;
	int i, j;
	int floor[15][15] = { 0, };
	for (i = 0; i < 15; i++)
	{
		floor[i][1] = 1;
	}
	for (j = 0; j <= 15; j++)
	{
		floor[0][j] = j;
	}
	for (i = 1; i < 15; i++)
	{
		for (j = 2; j < 15; j++)
		{
			floor[i][j] = floor[i - 1][j] + floor[i][j - 1];
		}
	}
	scanf("%d", &t);
	for (int a = 0; a < t; a++)
	{
		scanf("%d %d", &k, &n);
		printf("%d\n", floor[k][n]);
	}
}