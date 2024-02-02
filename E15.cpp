#include<stdio.h>
void Factorial(int t)
{
	int n;
	printf("Please enter integer n:");
	scanf("%d",&n);
	int giaithua = 1;
	for(int i = 1; i <= n; i++)
	{
		giaithua = giaithua * i;
	}
	printf("Factorial of %d la: %d\n",n,giaithua);
}

