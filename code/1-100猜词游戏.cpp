#include <stdio.h>
#include <stdlib.h>
int main()
{
	int random;
	int guess;
	int counter=0;
	random=rand()%100+1;
	do
	{
		printf("please guess a number\n");
		scanf("%d",&guess);
		counter++;
		if(guess>random)
		{
			printf("Wrong!Too high ");
		}
		else if(guess<random)
		{
			printf("Wrong!Too small ");
		}
		else
		{
			printf("Right\n");
		}
	}
	while(guess!=random);
	printf("%d",counter);
	return 0;
}
