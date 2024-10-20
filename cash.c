#include <stdio.h>

// Prototypes
int calc_quarters(int cents);
int calc_dimes(int cents);
int calc_nickels(int cents);
int calc_pennies(int cents);

int main(void) {

    // Prompt and scan input
    int cents = 0;
    do {
        printf("Change owed: ");
        scanf("%d", &cents);
    } while (cents <= 0);

    //Call funcs and subtract value of coins from cents
    int quarters = calc_quarters(cents);
    cents = cents - quarters * 25; 
    
    int dimes = calc_dimes(cents);
    cents = cents - dimes * 10; 
    
    int nickels = calc_nickels(cents);
    cents = cents - nickels * 5; 
    
    int pennies = calc_pennies(cents);
    cents = cents - pennies * 1;

    int coins = quarters + dimes + nickels + pennies;

    printf("You get %d coins back\n", coins);
    //printf("%d %d %d %d", quarters, dimes, nickels, pennies);
    printf("Have a great day!\n");

}

//Calculate quarters and subtract from cents
int calc_quarters(int cents) {
    int quarters = 0;
    while (cents >= 25) {
        quarters++; 
        cents = cents - 25;
    }
    return quarters;
}

//Calculate dimes and subtract from cents
int calc_dimes(int cents) {
    int dimes = 0;
    while (cents >= 10) {
        dimes++; 
        cents = cents - 10;
    }
    return dimes;
}

//Calculate nickels and subtract from cents
int calc_nickels(int cents) {
    int nickels = 0;
    while (cents >= 5) {
        nickels++; 
        cents = cents - 5;
    }
    return nickels;
}

//Calculate pennies and subtract from cents
int calc_pennies(int cents) {
    int pennies = 0;
    while (cents >= 1) {
        pennies++; 
        cents = cents - 1;
    }
    return pennies;
}