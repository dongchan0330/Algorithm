#include <stdio.h>
int main()
{
	int n, m, ns[100];	//n은 카드의 갯수, m은 합의 최대치, ns[100]은 고른 카드의 숫자 
	int sum, max = 0;	//sum은 3장의 합, max는 합 비교 
	scanf("%d %d", &n, &m);		//n,m값 입력 
	for (int i = 0; i < n; i++)		//ns 배열에 값을 넣기 
	{
		scanf("%d", &ns[i]);
	}
	for (int i = 0; i < n; i++)		//모든 카드에서 n장을 고르기 위한 3중반복문 
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				sum = ns[i] + ns[j] + ns[k];
				if (sum <= m && sum >= max)
				{
					max = sum;
				}
			}
		}
	}
	printf("%d ", max);
}