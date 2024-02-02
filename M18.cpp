#include <stdio.h>
void Cuttingstrings18(int t){
    char str[100], substr[100];
    int start, number_char;
    
    printf("Enter string:");
    getchar();
	fgets(str, 100, stdin); 
    
    printf("Enter the starting position : ");
    scanf("%d", &start);
    
    printf("Enter the number of characters to cut : ");
    scanf("%d", &number_char);
    
    printf("The substring is : ");
    for(int i = start; i < number_char; i++)
	{
		printf("%c",str[i]);
	}
	printf("\n");
}
