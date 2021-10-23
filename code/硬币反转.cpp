#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int N = 0,i=0,j=0;
	int arr[100] = { 0 };
	scanf("%d", &N);
	printf("%d\n", N);
	for (i = 0; i < N; i++)
	{
		arr[i] = 0;
	}
	for(i=0;i<N;i++)
	{
		for (j = 0; j < N; j++)
		{
			if (i != j)
			{
				if (arr[j] == 1)
				{
					arr[j] = 0;
				}
				else
				{
					arr[j] = 1;
				}
			}
		}
		for (j = 0; j < N; j++)
		{
			printf("%d", arr[j]);
		}
		printf("\n");
	}
	

	return 0;
}