#include<stdio.h>
#include<string.h>
void Arrayconcatenation(int t)
{
	int n,m;
    printf("Enter the number of array elements a:");scanf("%d",&n);
    printf("Enter the number of array elements b:");scanf("%d",&m);
    int a[n];
    int b[m];
    printf("Please enter the values of the array a:\n");
    for(int i = 0; i < n; i++){printf("a[%d] = ",i);scanf("%d",&a[i]);}
      printf("Please enter the values of the array b:\n");
    for(int i = 0; i < m; i++){printf("b[%d] = ",i);scanf("%d",&b[i]);}
     int len1 = sizeof(a)/sizeof(int);
     int len2 = sizeof(b)/sizeof(int);
     int resultlen = len1 + len2;
     int result[resultlen];
     for(int i = 0; i < len1; i++)
	 {
        	result[i] = a[i];
	 }
	for(int i = 0; i < len2; i++){
		result[len1 + i] = b[i];
	}
	printf("Array after concatenation :");
	for(int i = 0; i < resultlen; i++){
		printf("%d ",result[i]);
	}
	printf("\n");
}
