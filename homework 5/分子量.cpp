//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <ctype.h>
//#include <math.h>
//int main(void)
//{
//	int n = 0;
//	double C = 12.01;
//	double H = 1.008;
//	double O = 16.00;                        
//	double N = 14.01;
//	char arr[101][91] = { 0 };
//	int i = 0,j = 0,k=0,p=0;
//	double nsum = 0, hsum = 0, osum = 0, csum = 0, sum = 0;           //不懂为啥一定用double
//	double result = 0;
//	int count = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s", arr[i]);
//		for (j = 0; arr[i][j] != '\0'; j++)
//		{
//			if (arr[i][j] == 'N')
//			{
//				if (isdigit(arr[i][j+1]))
//				{
//					for (k = j + 1; isdigit(arr[i][k]); k++)
//					{
//						count++;
//					}
//					for (p = 1; p <= count; p++)
//					{
//						result += (arr[i][k - p] - 48) * pow(10, p - 1);          //字符数组，数字对应的是ASCII值，所以-48
//					}
//					nsum += N * result;
//					result=count = 0;               //初始化count和result
//				}
//				else
//				{
//					nsum += N;
//				}
//			}
//			if (arr[i][j] == 'C')
//			{
//				if (isdigit(arr[i][j + 1]))
//				{
//					for (k = j + 1; isdigit(arr[i][k]); k++)
//					{
//						count++;
//					}
//					for (p = 1; p <= count; p++)
//					{
//						result+=(arr[i][k - p]-48) * pow(10, p - 1);
//					}
//					nsum += C * result;
//					result = count = 0;
//				}
//				else
//				{
//					nsum += C;
//				}
//			}
//			if (arr[i][j] == 'H')
//			{
//				if (isdigit(arr[i][j + 1]))
//				{
//					for (k = j + 1; isdigit(arr[i][k]); k++)
//					{
//						count++;
//					}
//					for (p = 1; p <= count; p++)
//					{
//						result += (arr[i][k - p] - 48) * pow(10, p - 1);
//					}
//					nsum += H * result;
//					result = count = 0;
//				}
//				else
//				{
//					nsum += H;
//				}
//			}
//			if (arr[i][j] == 'O')
//			{
//				if (isdigit(arr[i][j + 1]))
//				{
//					for (k = j + 1; isdigit(arr[i][k]); k++)
//					{
//						count++;
//					}
//					for (p = 1; p <= count; p++)
//					{
//						result += (arr[i][k - p] - 48) * pow(10, p - 1);
//					}
//					nsum += O * result;
//					result = count = 0;
//				}
//				else
//				{
//					nsum += O;
//				}
//			}
//		}
//		sum = nsum + osum + hsum + csum;  //sum每次会被赋值，故不用赋值0
//		nsum = osum = hsum = csum = 0;   //加完要对他们赋值0,避免重叠几次结果
//		printf("%.3lf\n", sum);
//	}
//	return 0;
//}