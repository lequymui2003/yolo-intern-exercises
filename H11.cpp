#include <stdio.h>

int Factorialcalculation(int n)
{
    int a[] = {1, 1, 2, 6, 4, 2, 2, 4, 2, 8};
    if (n < 10) {
        return a[n];
    }

    if (((n / 10) % 10) % 2 == 0) {
        return ((6 * Factorialcalculation(n / 5) * a[n % 10]) % 10);
    } else {
        return ((4 * Factorialcalculation(n / 5) * a[n % 10]) % 10);
    }
}

void FactorialCalculation(int n)
{
    printf("Enter integer n: ");
    scanf("%d", &n);
    int factorial = 1;
    for(int i = 1; i <= n; i++)
	{
		factorial = factorial * i;
	}
	printf("The factorial of %d is: %d\n",n,factorial);
    printf("The final non-zero value of %d factorial is :%d\n",n,Factorialcalculation(n));
}



