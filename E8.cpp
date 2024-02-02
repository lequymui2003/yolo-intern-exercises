#include<stdio.h>
#include<math.h>
void Prime(int t){
    int number;
    bool isPrime = true;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number == 1) {
        isPrime = false;
    }
    else {
        for (int i = 2; i <= sqrt(number); i++) {
            if (number % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", number);
    }
    else {
        printf("%d is not a prime number.\n", number);
    }
}

