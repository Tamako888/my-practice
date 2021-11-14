//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int arr[51][80000] = { 0 };
//int main(void)
//{
//	int T = 0;
//	int N = 0;
//	int i = 0,j=0;
//	int t = 0;
//	scanf("%d", &T);
//	int arrc[21][11] = { 0 };
//	for (j = 0; j < T; j++)
//	{
//		scanf("%d", &N);
//		for (i = 1,t=i-1; i <= N; i++,t++)
//		{
//			if (i >= 1 && i < 10)
//			{
//				arr[j][t] = i;
//			}
//			if (i >= 10 && i < 100)
//			{
//				arr[j][t] = i / 10;
//				arr[j][1+t] = i % 10;
//				t++;
//			}
//			if (i >= 100 && i < 1000)
//			{
//				arr[j][t] = i / 100;
//				arr[j][1+t] = (i - i / 100 * 100) / 10;
//				arr[j][2+t] = i % 10;
//				t = t + 2;
//			}
//			if (i >= 1000 && i < 10000)
//			{
//				arr[j][t] = i / 1000;
//				arr[j][1+t] = (i - i / 1000 * 1000) / 100;
//				arr[j][2+t] = (i - i / 1000 * 1000 - (i - i / 1000 * 1000) / 100 * 100) / 10;;
//				arr[j][3+t] = (i - (i - i / 1000 * 1000) / 100 * 100) % 10;
//				t = t + 3;
//			}
//			if (i == 10000)
//			{
//				arr[j][t] = 1;
//				arr[j][1+t] = 0;
//				arr[j][2+t] = 0;
//				arr[j][3+t] = 0;
//				arr[j][4+t] = 0;
//				t = t + 4;
//			}
//			if (i == N)
//			{
//				for (i = 1; i <= t+1; i++)
//				{
//					if (arr[j][i-1] == 0)
//					{
//						arrc[j][0]++;
//					}
//					if (arr[j][i-1] == 1)
//					{
//						arrc[j][1]++;
//					}
//					if (arr[j][i-1] == 2)
//					{
//						arrc[j][2]++;
//					}
//					if (arr[j][i-1] == 3)
//					{
//						arrc[j][3]++;
//					}
//					if (arr[j][i-1] == 4)
//					{
//						arrc[j][4]++;
//					}
//					if (arr[j][i-1] == 5)
//					{
//						arrc[j][5]++;
//					}
//					if (arr[j][i-1] == 6)
//					{
//						arrc[j][6]++;
//					}
//					if (arr[j][i-1] == 7)
//					{
//						arrc[j][7]++;
//					}
//					if (arr[j][i-1] == 8)
//					{
//						arrc[j][8]++;
//					}
//					if (arr[j][i-1] == 9)
//					{
//						arrc[j][9]++;
//					}
//				}
//			}
//		}
//	}
//	for (j = 0; j < T; j++)
//	{
//		for (i = 0; i<10; i++)
//		{
//			printf("%d", arrc[j][i]);
//			if (i != 9)
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}