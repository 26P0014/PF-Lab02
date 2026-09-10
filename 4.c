/*Ali visited his grandmother, and she handed him 368 pennies as a gift. Carrying so many coins
would be a hassle, so Ali wishes to convert these 368 pennies into a better format. Write a
C program that distributes this amount into quarters, dimes, nickels, and pennies so that Ali
carries the least number of coins. Display the number of each coin type. Use the following
denitions:
▶ 1 quarter = 25 pennies
▶ 1 dime = 10 pennies
▶ 1 nickel = 5 pennies
Hint: Use integer division and the % operator.*/


#include <stdio.h>

int main(){      
/* hint  
1 quarter = 25 pennies
1 dime = 10 pennies
1 nickel = 5 pennies
Hint: Use integer division and the % operator. */
int total_pennies = 368;
    int remaining_pennies;
    int quarters, dimes, nickels, pennies;
    quarters = total_pennies / 25;
    remaining_pennies = total_pennies % 25;
    dimes = remaining_pennies / 10;
    remaining_pennies =  remaining_pennies % 10;
    nickels = remaining_pennies/ 5;
    pennies = remaining_pennies % 5;
    printf("Quarters: %d\n", quarters);
    printf("Dimes: %d\n", dimes);
    printf("Nickels: %d\n", nickels);
    printf("Pennies: %d\n", pennies);

    return 0;
}
