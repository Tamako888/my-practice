//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void)
//{
//	int T = 0;
//	long long a = 0, b = 0, c = 0;
//	int tep = 0,flag=0;
//	scanf("%d", &T);
//	while (T--)
//	{
//		scanf("%lld%lld%lld", &a, &b, &c);
//
//		if (a < b)
//		{
//			tep = a;
//			a = b;
//			b = tep;
//		}
//		if (a < c)
//		{
//			tep = a;
//			a = c;
//			c = tep;
//		}
//		if (b < c)
//		{
//			tep = b;
//			b = c;
//			c = tep;
//		}
//		if (b + c - a > 0 && a - b - c < 0)          //都用减法，避免溢出
//		{
//			flag = 1;
//		}
//		else
//		{
//			printf("No Solution\n");
//		}
//		if (flag)
//		{
//			if (b * b + c * c - a * a == 0)
//			{
//				printf("Right\n");
//			}
//			else if (b * b + c * c - a * a > 0)
//			{
//				printf("Acute\n");
//			}
//			else if (b * b + c * c - a * a < 0)
//			{
//				printf("Obtuse\n");
//			}
//		}
//		flag = 0;            //一次结束别忘了赋值为0
//	}
//	return 0;
//}