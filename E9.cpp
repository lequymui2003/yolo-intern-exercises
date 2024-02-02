#include<stdio.h>
void Surplus(int t){
	int a, b, count = 1, difference = 0;
	printf("Enter integer a :");
	scanf("%d",&a);
	printf("Enter integer a :");
	scanf("%d",&b);
	do{
		count++; difference = a -(b * count);
	}while(difference > b);
	printf("Surplus cua %d / %d : %d\n", a,b,difference);
}
