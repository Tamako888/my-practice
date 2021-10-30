//#define  _CRT_SECURE_NO_WARNINGS
//#define PI 3.141592654
//#include <stdio.h>
//#include <math.h>
//int main(void)
//{
//	int n = 0;                          //题目要求n为整型       //虽然定义宏常量PI有很多位小数，但float最多6位，舍去的位数会进行四舍五入
//	double N = 0;                        //因而必须定义一个float类型的变量来接值，但是由于题目要求太刁钻，误差小于0.000001，因而用double
//	scanf("%d", &n);
//	N= n *PI/180 ;                      //错解：n=n*PI/180;--即便n*PI时n转化为了float类型进行计算，但重新赋值给n时，n还是int型
//	printf("%lf\n%lf", sin(N), cos(N)); //则得到n=0的结果，打印出来便是0.000000和1.000000
//	return 0;
//}