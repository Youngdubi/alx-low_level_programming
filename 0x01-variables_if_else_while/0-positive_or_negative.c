 #include <stdio>
#include <stdlib.h>
include <time.h>
/**
 * main -Entry
 * Return:0-no error,non zero value if error.
 **/
int main(void)
{
	int n;
	srand(time(0));
	n= rand() - rand_max/2;
	if (n>0)
	{
		printf("%dis positive\n",n);
	}
	else if (n<0)
	{
		printf("%d is negative\n",n);
	}else if (n==0)
		printf("%d is zero\n",n);
	return(0)
}


