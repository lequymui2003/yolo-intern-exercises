#include<stdio.h>
void Sum(int t)
{
	 int n;
    printf("Enter the number of array elements: ");
    scanf("%d", &n);
    
    int a[n], b[n], c[n]; 
    
    printf("\nEnter the values of the array a:\n");
    for(int i=0; i<n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    
    printf("\nEnter the values of the array b:\n");
    for(int i=0; i<n; i++) {
        printf("b[%d] = ", i);
        scanf("%d", &b[i]);
    }
    
    
    for(int i=0; i<n; i++) {
        c[i] = a[i] + b[i];
    }
    
   
    printf("\nThe sum of the 2 arrays is:\n");
    for(int i=0; i<n; i++) {
        printf("c[%d] = %d\n", i, c[i]);
    }
		
	
}
