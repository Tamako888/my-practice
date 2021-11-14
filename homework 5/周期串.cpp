//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//int main(void)
//{
//	int n = 0;
//	int i = 0, j = 0, q = 0;
//	scanf("%d", &n);
//	int L = 0;
//	int T = 0;
//	int s = 0;
//	int k = 0;
//	int flag = 1, flag2 = 1;
//	for (q = 0; q < n; q++)
//	{
//		int x = 0;
//		{
//			char arr[81] = { 0 };
//			scanf("%s", arr);
//			L = strlen(arr);
//			for (i = 0; i < L - 1; i++)
//			{
//				if (arr[i] != arr[i + 1])
//				{
//					break;
//				}
//				if (i == L - 2)
//				{
//					printf("1\n\n");
//					x = 1;
//				}
//			}
//			if (x)
//			{
//				continue;
//			}
//			for (T = 2; T <= L; T++)
//			{
//				for (i = 0; i < T; i++)
//				{
//					if (arr[i] != arr[i + T])
//					{
//						flag2 = 0;
//						break;
//					}
//				}
//				if (i == T && flag2 == 1)
//				{
//					s = L / T;
//					if (L % T == 0)
//					{
//						for (k = 1; k < s; k++)
//						{
//							for (j = 0; j < T; j++)
//							{
//								if (arr[j] != arr[j + k * T])
//								{
//									flag = 0;
//									break;
//								}
//							}
//						}
//						if (flag)
//						{
//							break;
//						}
//					}
//					else
//					{
//						for (k = 1; k <= s; k++)
//						{
//							for (j = 0; j < T; j++)
//							{
//								if (arr[j] != arr[j + k * T])
//								{
//									flag = 0;
//									break;
//								}
//							}
//						}
//						if (flag)
//						{
//							break;
//						}
//
//					}
//				}
//				flag2 = 1;
//				flag = 1;
//			}
//			if (T == L + 1)
//			{
//				printf("%d\n", T - 1);
//			}
//			else
//			{
//				printf("%d\n", T);
//			}
//			flag = 1;
//
//			printf("\n");
//		}
//	}
//		return 0;
//}