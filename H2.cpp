#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void Random(int t)
{
	srand(time(NULL));
	int a, b;
	printf("Enter a:");scanf("%d",&a);
	do{
		printf("Enter b:");scanf("%d",&b);
	}while( a > b);

    

		int c = rand() % (b - a) + a;
	    printf("The random number c is : %d\n",c);
	

}
