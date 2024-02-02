#include<stdio.h>
void Take(int t)
{
	int n;
    printf("Enter the number of array elements: ");
    scanf("%d", &n);
    
    int a[n];
    
    printf("\nEnter the values of the array  a:\n");
    for(int i=0; i<n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    int start;
    int end;
	printf("Please enter your starting location: ");
	scanf("%d",&start);
	printf("Please enter the ending location: ");
	scanf("%d",&end);
	int b[end - start + 1];
	for(int i = start; i <= end; i++)
	{
		b[i - start] = a[i];
	}
	printf("Array b is : ");
	for(int i = 0; i < (end- start +1); i++)
	{
		printf("%d ", b[i]);
	}
    printf("\n");
} 
