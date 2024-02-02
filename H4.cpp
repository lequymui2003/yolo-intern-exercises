#include<stdio.h>
void Descending_array_concatenation(int t)
{
	int n,m;
	printf("Enter the number of array elements a:");scanf("%d",&n);
	printf("Enter the number of array elements b:");scanf("%d",&m);
    int a[n], b[m];
    printf("Please enter the values of the array a : ");
    for(int i = 0; i < n; i++){printf("a[%d] = ",i);scanf("%d",&a[i]);}
    printf("Please enter the values of the array b : ");
    for(int i = 0; i < m; i++){printf("b[%d] = ",i);scanf("%d",&b[i]);}
	int i = 0, j = 0, cnt = 0, c[n+m];
    while(i < n && j < m)
	{
		if(a[i] >= b[j])
		{
			c[cnt++] = a[i];
			++i;
		}else
		{
			c[cnt++] = b[j];
			++j;
		}
	}
	while(i<n)
	{
		c[cnt++] = a[i++];
	}
    while(j<m)
	{
		c[cnt++] = b[j++];
	}
	
	printf("Array c after concatenating two arrays a and b sorted in descending order is : ");
	for(int i = 0; i < n+m; i++)
	{
		printf("%d ",c[i]);
	}
	printf("\n");
}
