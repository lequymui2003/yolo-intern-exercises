#include<stdio.h>
#include<math.h>
void Indexnumber(int t)
{
	int a, b, c;
	printf("Enter the number a : ");scanf("%d", &a);
	printf("Enter the exponent b : ");scanf("%d", &b);
	
	c = pow (a,b);
	printf("c = %d^%d la : %d\n", a, b, c);
	
}

