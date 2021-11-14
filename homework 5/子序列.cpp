//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//int main(void)
//{
//	long long i = 0, j = 0;
//	long long L1 = 0, L2 = 0;
//	char s[100001] = { 0 };
//	char t[100001] = { 0 };                //留位置放/0
//	char tep[100001] = { 0 };
//	while (scanf("%s%s", s, t) != EOF)
//	{
//		L1 = strlen(s);
//		L2 = strlen(t);
//		for(j = 0; j < L2; j++)
//		{
//			if (s[i] == t[j])
//			{
//				i++;                   //当检索到t中有元素与s中的相同才i++（s的下标）
//			}                          //而j在每比较一次后都i++，不符合if的要求的i不自增，而j继续自增，相当于从t删去该元素
//		}
//		if (i == L1)
//		{
//			printf("Yes\n");
//		}
//		else
//		{
//			printf("No\n");
//		}
//		i = 0;
//		strcpy(s, tep);
//		strcpy(t, tep);
//	}
//	return 0;
//}
//
//
