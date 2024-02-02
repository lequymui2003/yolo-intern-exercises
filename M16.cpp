#include <stdio.h>
void Fibonacci(int t){
   int n;
   printf("Enter the number of Fibonacci numbers you want to print: ");
   scanf("%d", &n);
   
   int a = 1, b = 2, c;
   printf("The first Fibonacci numbers are : ");
   
   for (int i = 0; i < n; i++) {
      printf("%d ", a);
      c = a + b;
      a = b;
      b = c;
   }
   printf("\n");
}
