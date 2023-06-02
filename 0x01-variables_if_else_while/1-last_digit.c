#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
    int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = m % 10;
	if (m > 5)
	    printf("Last string of %i is %i and is greather than 5\n", n, m);
	else if (m ==0 )
	    printf("Last string of %i is %i and is 0\n", n, m);
	else 
	    printf("the last string of %i is %i and is greather than 5\n", n, m);
	return (0);
}
