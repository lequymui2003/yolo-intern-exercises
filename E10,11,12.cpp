#include<stdio.h>

void Maxmin(int t)
{
	int n;
	int a[n];
	printf("Enter the number of array elements:");scanf("%d",&n);
	for(int i = 0; i < n; i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	int max = a[0];
	int min = a[0];
	for(int i = 0; i < n; i++)
	{
		if(a[i] > max)
		{
			max = a[i];
		} 
		if(a[i] < min)
		{
			min = a[i];
		}
	} 
	
	float average = 0;
	int sum = 0;
	for(int i = 0; i < n; i++){
		sum = sum + a[i];
	} 
	average = sum / n;

	printf("Max of array a is : %d\n",max);
	printf("Min of array a is : %d\n",min);
	printf("Trung binh cua mang la: %.2f\n",average);
}
