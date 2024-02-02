#include<stdio.h>
void Homogeneity(int t){
	 int a, b;
	printf("Enter integer a:");
	scanf("%d",&a);
	printf("Enter integer a:");
	scanf("%d",&b);
	if(a % 2 == 0 && b % 2 == 0){
		printf("Even homogenous");
	}
	if(a %2 != 0 && b % 2 != 0){
		printf("Odd homogeneity");
	}
	if(a %2 == 0 && b % 2 != 0){
		printf("%d is an even number\n", a);
		printf("%d is an odd number\n", b);
	}
	if(a %2 != 0 && b % 2 == 0){
		printf("%d is an even number\n", b);
		printf("%d is an odd number", a);
	}
	printf("\n");
}
