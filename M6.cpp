#include<stdio.h>
void Division(int t)
{
	int n;
    printf("Enter the number of array elements: ");
    scanf("%d", &n);
    
    float a[n], b[n],c[n]; 
    
    printf("\nEnter the values of the array a:\n");
    for(int i=0; i<n; i++) {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }
    
    printf("\nEnter the values of the array b:\n");
    for(int i=0; i<n; i++) {
        printf("b[%d] = ", i);
        scanf("%f", &b[i]);
    }
    
    
    for(int i=0; i<n; i++) {
        c[i] = a[i] / b[i];
    }
    
   
    printf("\nThe quotient of the two arrays is:\n");
    for(int i=0; i<n; i++) {
        printf("c[%d] = %.2f\n", i, c[i]);
    }
}
