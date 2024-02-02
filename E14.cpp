#include<stdio.h>
void Findlocation(int t){

	int n, a[100],element;
	printf("Enter the number of array elements:");
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}

    printf("Enter the element you want to search for position :");
	scanf("%d",&element);
	
	int j;
	for(int i = 0; i < n; i++){
		if(element == a[i])
		{
			j = i;
			break;
		} 
	}
	if(j != 0)
	{
		printf("The position of the element %d la: %d\n",element, j);
	}else{
		printf("The position of element %d was not found in the array",element);
	}

}
