#include<stdio.h>
void Reverseorder(int n, int a[]){
   int j = n-1;
   int k = 0;
   int temp = 0;
   while(j>k)
   {
   	  temp = a[k];
   	  a[k] = a[j];
   	  a[j] = temp;
   	  k++;
   	  j--;
   	  temp = 0;
   }
}
void Input13(int t){
	int n, a[n];
	printf("Enter the number of array elements:");
	scanf("%d",&n);
	for(int i = 0; i<n; i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	Reverseorder(n,a);
	printf("Mang sau khi dao nguoc la :\n");
   for(int i =0; i < n; i++){
   	  printf("a[%d] = %d\n",i,a[i]);
   }
}
