#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

void Chain(int t)
{
	char c1[1000], c2[1000],a[100][100],b[100][100];
	printf("Please enter the string b:");
	getchar();
	fgets(c1, 1000, stdin);
	printf("Please enter the string a:");
    fgets(c2, 1000, stdin);
	int n = 0, m = 0;
	
	char *token = strtok(c1, " ");
	while(token != NULL)
	{
		strcpy(a[n++],token);
		token = strtok(NULL, " ");
	}
	
	token = strtok(c2, " ");
	while(token != NULL)
	{
		strcpy(b[m++],token);
		token = strtok(NULL, " ");
	}
	
	int cnt = 0;
	for(int i = 0; i < n; i++)
	{
		while(strcmp(a[i],a[i+1]) == 0) ++i;
		for(int j = 0; j < m; j++)
		{
			if(strcmp(a[i],b[j]) == 0)
			{
				cnt++;
				break;
			}
		}
	}
	printf("The total number of occurrences of string a in string b is : %d\n",cnt);
}
