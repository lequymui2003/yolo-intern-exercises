#include<stdio.h>
void Currency_exchange(int t)
{
		int n;
		printf("Enter the price to be converted as :");
		scanf("%d",&n);
		int a[10]={500,100,50,20,2,1};
		int cnt = 0;
		for(int i = 0; i < 6; i++)
		{
			cnt = cnt + n/a[i];
			n = n % a[i];
		}
		printf("Amount converted to %d banknote\n",cnt);
}
