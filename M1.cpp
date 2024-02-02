#include<stdio.h>
void Arrange(int t){
	
    int n, a[n];
	printf("Enter the number of array elements:");
	scanf("%d",&n);
	for(int i = 0; i < n; i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}



  for(int i = 0; i < n-1; i++)
  {
  	int smallestposition = i;
  	for(int j = i + 1; j < n; j++)
	  {
  	    if(a[j] < a[smallestposition])
		  {
		  	smallestposition = j;
		  }	
	  }
	  int temp =  a[i];
	  a[i] = a[smallestposition];
	  a[smallestposition] = temp;
  }	
  	printf("The array in ascending order is:\n");
     for(int i = 0; i < n; i++){
   	printf("a[%d] = %d\n",i,a[i]);
    }


  for(int i = 0; i < n-1; i++)
  {
  	int biggestposition = i;
  	for(int j = i + 1; j < n; j++)
	  {
  	    if(a[j] > a[biggestposition])
		  {
		  	biggestposition = j;
		  }	
	  }
	  int temp =  a[i];
	  a[i] = a[biggestposition];
	  a[biggestposition] = temp;
  }	

	printf("The array in descending order is:\n");
	for(int i = 0; i < n; i++){
   	printf("a[%d] = %d\n",i,a[i]);
    }
}
