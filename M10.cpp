#include<stdio.h>
void Notinarray(int t)
{
int n;
	int a[n],b[n];
	printf("Enter the number of array elements :"); scanf("%d",&n);
	printf("Enter the values of the array a:\n");
	for(int i = 0; i < n; i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	printf("Enter the values of the array b:\n");
	for(int i = 0; i < n; i++)
	{
		printf("b[%d] = ",i);
	    scanf("%d",&b[i]);
	}
	int count = 0;
	for(int i = 0; i < n; i++)
	{
		int found = 0;
		for(int j = 0; j < n;j++)
		{
			if(a[i] == b[j]){
				found = 1;
				break;
			}
		}
		if(!found)
		{
			count++;
		}
	}
	printf("The total number of elements of array a that are not in array b is: %d\n",count);
}
