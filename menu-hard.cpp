#include<stdio.h>
#include"H1.cpp"
#include"H2.cpp"
#include"H3.cpp"
#include"H4.cpp"
#include"H7.cpp"
#include"H8.cpp"
#include"H9.cpp"
#include"H10.cpp"
#include"H11.cpp"
#include"H12.cpp"
void HARD(int n)
{
	int t, select;
	int c;
	char* result;
	do{
		printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		printf("++                                                                                                        ++\n");
		printf("++                                               LEVEL HARD                                               ++\n");
		printf("++                                                                                                        ++\n");
		printf("++             1. Write a function that reverses the character of each word in a sentence                 ++\n");
		printf("++             2. Let random() function return a value from a to b(b>a)                                   ++\n");
		printf("++             3. Write a function that joins 2 arrays of numbers sorted in ascending order               ++\n");
		printf("++             4. Write a function that joins 2 sorted arrays of numbers in descending order              ++\n");
		printf("++             5. Convert a number to an amount in words                                                  ++\n");
		printf("++             6. Convert an amount to the minimum amount of currency to convert(1,2,20,50,100,500)       ++\n");
		printf("++             7. Number of occurrences of string a in string b                                           ++\n");
		printf("++             8. Shuffle the order of the elements in the array of numbers                               ++\n");
		printf("++             9. Write a function that returns the last non-zero digit of n factorials                   ++\n");
		printf("++             10.The total number of zeros that appear in the value of n factorial                       ++\n");
		printf("++             0. Back                                                                                    ++\n");
		printf("++                                                                                                        ++\n");
		printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		printf("Please choose an exercise :");
		scanf("%d",&select);
		switch(select)
		{
			case 1:
				Reverse(t);
				break;
			case 2:
				Random(t);
				break;
			case 3:
				Ascending_array_concatenation(t);
				break;
			case 4:
				Descending_array_concatenation(t);
				break;
			case 5:
				Input(t);
				convertmoneytowords(c,result);
				break;
			case 6:
				Currency_exchange(t);
				break;
			case 7:
				Chain(t);
				break;
			case 8:
				Mix(t);
				break;
			case 9:
				Factorialcalculation(n);
				FactorialCalculation(n);
				break;
			case 10:
				Countfactorial(t);
				break;
			case 0:
				break;
		}
	}while(n != 0);
}
