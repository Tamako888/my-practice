//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int Judge(int x)
//{
//	int i = 0;
//	for (i = 2; i < x; i++)
//	{
//		if (x % i == 0)
//		{
//			return 0;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	if (x == 2)
//	{
//		return 1;
//	}
//}
//int main(void)
//{
//	int r = 0, n = 0;
//	int pa = 0, pb = 0;
//	int i = 0,j=0;
//	int L = 0,tep=-1;
//	scanf("%d%d", &r, &n);
//	if (n % 2 == 0)
//	{
//		if (r % 2 == 0)
//		{
//			for (i = 1; i <= r / 2; i++)
//			{
//				scanf("%d", &L);
//				tep= Judge(L);
//				if (tep == 0)
//				{
//					if (L == 15);
//					else
//					{
//						pa = pa + 1;
//					}
//				}
//				if (tep == 1)
//				{
//					if (L == 11)
//					{
//						pa = pa + 3;
//					}
//					else
//					{
//						pa = pa + 2;
//					}
//				}
//			}
//			pb = r;
//		}
//		else
//		{
//			for (i = 1; i <= r / 2 + 1; i++)
//			{
//				scanf("%d", &L);
//				tep = Judge(L);
//				if (tep == 0)
//				{
//					if (L == 15);
//					else
//					{
//						pa = pa + 1;
//					}
//				}
//				if (tep == 1)
//				{
//					if (L == 11)
//					{
//						pa = pa + 3;
//					}
//					else
//					{
//						pa = pa + 2;
//					}
//				}
//			}
//			pb = r/2*2;           //一定要这样而不是直接错误代码：pb=r，假设r为7，则pb=7；❌
//		}                         //若为pb=r/2*2--得到的结果是6，int型对小数位不存储导致有如此与数学上的差异✔
//	}
//	else
//	{
//		if (r % 2 == 0)
//		{
//			for (i = 1; i <= r / 2; i++)
//			{
//				scanf("%d", &L);
//				tep = Judge(L);
//				if (tep == 0)
//				{
//					if (L == 15);
//					else
//					{
//						pa = pa + 1;
//					}
//				}
//				if (tep == 1)
//				{
//					if (L == 11)
//					{
//						pa = pa + 3;
//					}
//					else
//					{
//						pa = pa + 2;
//					}
//				}
//			}
//			pb = r;
//		}
//		else
//		{
//			pb = 2*(r/2+1);
//			for (i = 1; i <= r / 2; i++)
//			{
//				scanf("%d", &L);
//				tep = Judge(L);
//				if (tep == 0)
//				{
//					if (L == 15);
//					else
//					{
//						pa = pa + 1;
//					}
//				}
//				if (tep == 1)
//				{
//					if (L == 11)
//					{
//						pa = pa + 3;
//					}
//					else
//					{
//						pa = pa + 2;
//					}
//				}
//			}
//		}
//	}
//	if (r == 1 && L==15)                    //阴间比赛，只有一个人投也可以举行，且只有LWH会得0分，故只有一轮时且LWH得0分即为equal
//	{
//		printf("equal.");
//		return 0;
//	}
//		if (pa > pb)
//		{
//			printf("lwh wins.");
//		}
//		else if (pa < pb)
//		{
//			printf("lzh wins.");
//		}
//		else
//		{
//			printf("equal.");
//		}
//	return 0;
//}