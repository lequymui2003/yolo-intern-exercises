#include<stdio.h>
#include"C:\BaiTest\Easy\menu-easy.cpp"
#include"C:\BaiTest\Medium\menu-medium.cpp"
#include"C:\BaiTest\Hard\menu-hard.cpp"
int main()
{
	int select,n;
	do{
	printf("++++++++++++++++++++++++++++++++++++\n");
	printf("++                                ++\n");
	printf("++        SELECT TEST LEVEL       ++\n");
	printf("++             1. EASY            ++\n");
	printf("++             2. MEDIUM          ++\n");
	printf("++             3. HARD            ++\n");
	printf("++             0. EXIT            ++\n");
	printf("++                                ++\n");
	printf("++++++++++++++++++++++++++++++++++++\n");
	printf("Please choose a level :");
	scanf("%d",&select);
	switch(select)
	{
		case 1:
			EASY(n);
			break;
		case 2:
			MEDIUM(n);
			break;
		case 3:
			HARD(n);
			break;
		case 0: 
	    	break;
			
	}
}while(select != 0);
}
