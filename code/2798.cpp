#include <stdio.h>
int main()
{
	int n, m, ns[100];	//n�� ī���� ����, m�� ���� �ִ�ġ, ns[100]�� �� ī���� ���� 
	int sum, max = 0;	//sum�� 3���� ��, max�� �� �� 
	scanf("%d %d", &n, &m);		//n,m�� �Է� 
	for (int i = 0; i < n; i++)		//ns �迭�� ���� �ֱ� 
	{
		scanf("%d", &ns[i]);
	}
	for (int i = 0; i < n; i++)		//��� ī�忡�� n���� ���� ���� 3�߹ݺ��� 
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