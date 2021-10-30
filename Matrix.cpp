#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int N = 0, M = 0;
	int arr[30][30] = { 0 };
	int tep[30][30] = { 0 };
	int i = 0,j=0,k=0;
	int m = 0 ;
	scanf("%d%d", &N,&M);
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (i = 0; i < N; i++)
	{
		for (j = 0; j< N ; j++)
		{
			tep[i][j] = arr[i][j];
		}
	}
	for (k = 0; k < M; k++)
	{
		for (i = 0; i < N; i++)
		{
			for (j = 0; j < N; j++)
			{
				tep[i][j] = arr[i][j];
			}
		}
		scanf("%d", &m);
		if (m == 1)
		{
			for (i = 0; i < N; i++)
			{
				for (j = 0; j < N; j++)
				{
					arr[j][N - i - 1] = tep[i][j];
				}
			}
			for (i = 0; i < N; i++)
			{
				for (j = 0; j < N; j++)
				{
					printf("%d ", arr[i][j]);	
				}
				printf("\n");
			}
			printf("\n");
		}
		if (m == 2)
		{
			for (i = 0; i < N; i++)
			{
				for (j = 0; j < N; j++)
				{

					arr[N - j - 1][i] = tep[i][j];
				}
			}
				for (i = 0; i < N; i++)
				{
					for (j = 0; j < N; j++)
					{
						printf("%d ", arr[i][j]);
					}
					printf("\n");
				}
				printf("\n");
			
		}
			if (m == 3)
			{
				for (i = 0; i < N; i++)
				{
					for (j = 0; j < N; j++)
					{
						
						arr[N - i - 1][N - j - 1] = tep[i][j];
					}
				}
					for (i = 0; i < N; i++)
					{
						for (j = 0; j < N; j++)
						{
							printf("%d ", arr[i][j]);
						}
						printf("\n");
					}
					printf("\n");
				
			}
		
	}
	return 0;
}