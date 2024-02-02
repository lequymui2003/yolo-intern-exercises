#include<stdio.h>
#include<string.h>
void Reverse(int t)
{
	char s[100];
	printf("Enter the character string :");
	getchar();
	fgets(s, 100, stdin);
	
	for(int i = 0; i < strlen(s)/2; i++)
	{
		char temp = s[i];
		s[i] = s[strlen(s) - i - 1];
		s[strlen(s) - i - 1] = temp;
	}
	printf("The string after inversion is : %s\n",s);
	
}
