#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void Random11(int t)
{
	srand(time(NULL));
	int a;
	printf("Please enter a:");
	scanf("%d",&a);
	int b = rand() % a + 0;
	printf("A random number between 0 and a is: %d\n", b);
}
