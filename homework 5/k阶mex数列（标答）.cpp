#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int T;
	scanf("%d", &T);
	while (T--)
	{
		int n, k;
		scanf("%d %d", &n, &k);

		printf("%d\n", n % (k + 1));
	}
	return 0;
}
