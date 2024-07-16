#include <stdio.h>

int N_quarter (int cents);
int N_dime (int cents);
int N_nickel (int cents);
int N_penny (int cents);

int main()
{
    // Available Denominations: 25, 10, 5, 1;
    int cents;
    printf("Enter the amount in cents: \n");
    do
    {
        scanf("%d", &cents);
    }
    while (cents < 0);
    int quarters = N_quarter(cents);
    printf("q: %d\n",quarters);
    printf("cents: %d\n", cents);
    cents = cents - (quarters * 25);

    int dimes = N_dime(cents);
    printf("d: %d\n",dimes);
    printf("cents: %d\n", cents);
    cents = cents - (dimes * 10);

    int nickles = N_nickel(cents);
    printf("n: %d\n",nickles);
    printf("cents: %d\n", cents);
    cents = cents - (nickles * 5);
    
    int pennies = N_penny(cents);
    printf("p: %d\n",pennies);
    printf("cents: %d\n", cents);
    pennies = cents - (pennies * 1);
    printf("The lowest no of coins is: %d\n", quarters + dimes + nickles + pennies);
}

int N_quarter (int cents)
{
    int quarters = 0;
    while (cents >= 25)
    {
        quarters++;
        cents -= 25;
    }
    return quarters;
}

int N_dime (int cents)
{
    int dimes = 0;
    while (cents >= 10)
    {
        dimes++;
        cents -= 10;
    }
    return dimes;
}

int N_nickel (int cents)
{
    int nickels = 0;
    while (cents >= 5)
    {
        nickels++;
        cents -= 5;
    }
    return nickels;
}

int N_penny (int cents)
{
    int pennies = 0;
    while (cents >= 1)
    {
        pennies++;
        cents -= 1;
    }
    return pennies;
}