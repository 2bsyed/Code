#include <stdio.h>
#include <stdlib.h>

int main() {
    /// define conversion values in cents
    const int dollarValue = 100;
    const int quarterValue = 25;
    const int dimeValue = 10;
    const int nickelValue = 5;

    int changeAmount = 0;

    /// Solution 1

    printf("Enter an amount in cents : ");
    scanf("%d", &changeAmount);

    int balance = 0, dollars = 0, quarters = 0, dimes = 0, nickels = 0, pennies = 0;

    dollars = changeAmount / dollarValue;
    balance = changeAmount - (dollars * dollarValue);

    quarters =  balance / quarterValue;
    balance -= quarters * quarterValue;

    dimes = balance / dimeValue;
    balance -= dimes * dimeValue;

    nickels = balance / nickelValue;
    balance -= nickels * nickelValue;

    pennies = balance;

    printf("\nYou can provide this change as follows :\n");
    printf("dollars  : %d\n", dollars);
    printf("quarters : %d\n", quarters);
    printf("dimes    : %d\n", dimes);
    printf("nickels  : %d\n", nickels);
    printf("pennies  : %d\n", pennies);



/// Solution 2 - using the modulo operator


    printf("\nSolution using the modulo operator\n");
    printf("----------------------------\n");

    balance = dollars = quarters = dimes = nickels = pennies = 0;  /// reset everthing to zero

    dollars = changeAmount / dollarValue;
    balance = changeAmount % dollarValue;

    quarters = balance / quarterValue;
    balance %= quarterValue;

    dimes = balance / dimeValue;
    balance %= dimeValue;

    nickels = balance / nickelValue;
    balance %= nickelValue;

    pennies = balance;

    printf("\nYou can provide this change as follows :\n");
    printf("dollars  : %d\n", dollars);
    printf("quarters : %d\n", quarters);
    printf("dimes    : %d\n", dimes);
    printf("nickels  : %d\n", nickels);
    printf("pennies  : %d\n", pennies);

    return 0;
}
