#include<stdio.h>
void swap(int t)
{
	int a, b, c;
	printf("Enter 3 numbers a, b, c :\n");
	scanf("%d%d%d", &a, &b, &c);
	
	printf("You have entered :\na = %d \nb = %d \nc = %d", a, b, c);
	
	int temp = a;
	a = c ;
	c = temp;

	printf("\nAfter permutation : \na = %d \nb = %d \nc = %d\n", a,b,c);

}

