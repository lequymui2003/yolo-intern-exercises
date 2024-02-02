#include <stdio.h>
#include <string.h>
void Cut(int t){
    char str[100], substr[100];
    int start, end;
    
    printf("Enter string: ");
    getchar();
	fgets(str, 100, stdin); 
    
    printf("Enter the starting position : ");
    scanf("%d", &start);
    
    printf("Enter the end position : ");
    scanf("%d", &end);
    
    strncpy(substr, &str[start], end-start+1); 
    substr[end-start+1] = '\0'; 
    
    printf("The substring is : %s\n", substr);
    
  
}
