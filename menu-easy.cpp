#include<stdio.h>
#include"E1.cpp"
#include"E2.cpp"
#include"E3.cpp"
#include"E4,5,6,7.cpp"
#include"E8.cpp"
#include"E9.cpp"
#include"E10,11,12.cpp"
#include"E13.cpp"
#include"E14.cpp"
#include"E15.cpp"
void EASY(int n)
{
	int select,t;
	int a[100];
	do{
		printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		printf("++                                                                                                             ++\n");
		printf("++                                                  LEVEL EASY                                                 ++\n");
	    printf("++                                                                                                             ++\n");
		printf("++           1. Swap the value of 3 numbers a,b,c with each other                                              ++\n");
		printf("++           2. Write a function to calculate a to the power b                                                 ++\n");
		printf("++           3. Check the parity uniformity of two numbers                                                     ++\n");
		printf("++           4. Count the number of even and odd numbers and sum the even and odd numbers in the array         ++\n");
		printf("++           5. Write a function to check if a number is prime ?                                               ++\n");
		printf("++           6. Write a function to find remainder of a divided by b (do not use %)                             ++\n");
		printf("++           7. Find the maximum and minimum values, and average the numbers of the array                      ++\n");
		printf("++           8. Write a reverse order function                                                                 ++\n");
		printf("++           9. Find the position of a number in an array of numbers                                           ++\n");
		printf("++           10. Write a function to calculate n factorial                                                     ++\n");
		printf("++           0. Back                                                                                           ++\n");
		printf("++                                                                                                             ++\n");
		printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		printf("Please choose an exercise :");
		scanf("%d",&select);
		switch(select)
	{
	    case 1:
	     	swap(t);
	     	break;
	    case 2:
	     	Indexnumber(t);
	     	break;
		case 3:
			Homogeneity(t);
			break;
		case 4:
			Parity(t);
			break;	
		case 5:
			Prime(t);
			break;
		case 6:
			Surplus(t);
			break;
		case 7:
			Maxmin(t);
			break;
		case 8:
			Input13(t);
			Reverseorder(t,a);
			break;
		case 9:
			Findlocation(t);
			break;
		case 10:
			Factorial(t);
			break;
		case 0:
			break;
	}
	}while(n != 0);
}

