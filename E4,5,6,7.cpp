#include<stdio.h>

void Parity(int t){

    int n; 
    int a[n];
    printf("Enter the number of array elements: ");
    scanf("%d", &n); 
 
    for(int i=0;i<n;i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    int evencount = 0, oddcount = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i] % 2 == 0 )
            evencount++;
        else oddcount++;
    }
     

    int eventotal = 0;
    for(int i = 0; i < n; i++){
    	if(a[i] % 2 ==0){
    		eventotal = eventotal + a[i];
}
}

    int oddtotal = 0;
    for(int i = 0; i < n; i++){
    	if(a[i] % 2 !=0){
    		oddtotal = oddtotal + a[i];
    	}
}

    printf("The number of even numbers is: %d", evencount);
	printf("\nThe number of odd numbers is: %d\n", oddcount);
	printf("The odd total is: %d\n",oddtotal);
  	printf("The even total is: %d\n",eventotal);
}

   
     
   


