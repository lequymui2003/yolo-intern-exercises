#include <stdio.h>

void Tax(int t){
    int n;
    float income, tax, total_tax = 0;
    
    printf("Enter the number of months: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("Enter monthly income %d: ", i);
        scanf("%f", &income);

        if (income >= 50000000) {
            tax = income * 0.2;
        } else if (income >= 20000000) {
            tax = income * 0.1;
        } else {
            tax = income * 0.05;
        }

        total_tax += tax;
    }

    printf("The total amount of tax payable in %d straight is: %.2f\n", n, total_tax);

}

