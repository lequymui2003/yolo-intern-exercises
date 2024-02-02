#include <stdio.h>
void Sumofdigits(int t)
{
    int n;
    printf("Enter integer n :");scanf("%d",&n);
    
    int sum = 0;
    while (n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    printf("The sum of the integers n is : %d \n", sum);
  
}
