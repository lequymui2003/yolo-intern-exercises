#include<stdio.h>

void Countfactorial(int t)
{
	int n;
	int factorial;
	printf("Enter integer n:");
	scanf("%d",&n);
	
	
	factorial = 1;
	for(int i = 1; i <= n; i++)
	{
		factorial = factorial * i;
	}
	printf("The factorial of %d is: %d\n",n,factorial);
	
	int count = 0;
    while (n >= 5) {
    	count += n/5;
        n /= 5;
    }
	printf("The number of zeros in the factorial value is : %d\n",count);
}

