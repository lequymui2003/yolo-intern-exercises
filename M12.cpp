#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void Random12(int t)
{
	srand(time(NULL));
	int a;
	printf("Please enter a:");
	scanf("%d",&a);
	int b = rand() % (2 * a + 1) - a;
	printf("A random number between a and -a is: %d\n", b);
}
