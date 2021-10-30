//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void)
//{
//	float s = 0,x=0;
//	double v = 7,q=0;
//	double sum = 7;
//	scanf("%f%f", &s, &x);
//	if (x >= s)                 //两种情况，一是检测器的距离大于s，即第一秒就开始抓
//	{
//		if (v -x -s>0)
//		{
//			printf("n");
//			return 0;
//		}
//		else
//		{
//			printf("y");
//			return 0;
//		}
//	}                                          //二是第一秒之后的情况
//	while (sum =sum+v* 0.98)      //这里要算路程               
//	{
//		v = v * 0.98;             //记录当秒的速度
//		if (sum>=s-x)             //千万别在贪方便而把路程与速度用一个变量表示了，哭哭
//		{
//			q = sum - s + x;
//			if (0<v*0.98-(2 * x - q))
//			{
//				printf("n");
//				break;
//			}
//			else
//			{
//				printf("y");
//				break;
//			}
//		}
//	}
//	return 0;
//}