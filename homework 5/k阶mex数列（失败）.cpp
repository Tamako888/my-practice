#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
long long arr[1000000] = { -1 };
long long mex(long long l, long long r, long long k);
long long *A(long long l, long long r, long long k);
long long i = 0;
long long j = 0;           //全局变量
long long q = 0;
long long Mex(long long n, long long k)
{
	long long l, r;
	l = n - k;
	r = n - 1;
	if (n < k)
	{
		return n;
	}
	else
	{
		return mex(l, r, k);
	}
}
long long mex(long long l, long long r, long long k)
{
	long long a = 0;
	long long *p=A(l, r, k);
	long long y = 0;
	for (y = 0;; y++)
	{
		for (q = 0; q < r - l + 1; q++)
		{
			if (y == p[q])
			{
				break;
			}
			if (q == r - l)
			{
				return y;
			}
		}
	}
	return a;
}
long long *A(long long l, long long r, long long k)
{
	long  long L, R;
	L = l;
	R = r;
	for (j = 0; L<=R; L++,j++)
	{
		arr[j] = Mex(L, k);
	}
	return arr;

}
int main(void)
{
	int T = 0;
	long long n = 0, k = 0;
	scanf("%d", &T);
	long long B = 0;
	while (T--)
	{
		scanf("%lld%lld", &n, &k);
		B=Mex(n, k);
		printf("%lld\n", B);
		B = 0;
	}
	return 0;
}