#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main-program entry point.
 *
 * Return:0 if no erro, non-zero value if error.
 */
int main(void)
{
	int n;
	int idigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	idigit = n % 10;
	if (idigit > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, idigit);
	}
	else if (idigit == 0)
	{
		printf("last digit of %d is %d  and is 0\n", n, idigit);
	}
	else if (idigit < 6)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, idigit);
	}
	return (0);
}
