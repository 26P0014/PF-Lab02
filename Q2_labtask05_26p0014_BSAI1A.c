/*2 QUESTION#2: Saving for a Laptop (while loop)
Sara wants to buy a laptop. She already has some savings and adds a fixed amount to her
savings at the end of every month. Take the laptop price, her current savings, and her monthly
saving as input (all positive). Display her total savings after each month until the savings are
enough to buy the laptop, then display the number of months she needed.
If her current savings are already enough, the program must display 0 months without printing
any monthly savings. Explain in a comment why a while loop handles this case correctly.

FASTNUCES Lab 05: Loop Tasks

Sample run:
Laptop price: 150000
Current savings: 20000
Monthly saving: 25000
Month 1: savings = 45000
Month 2: savings = 70000
Month 3: savings = 95000
Month 4: savings = 120000
Month 5: savings = 145000
Month 6: savings = 170000
Sara can buy the laptop after 6 months.*/

#include <stdio.h>
int main()
{
 int price, savings, monthly;
 int months = 0;
printf("Laptop price: ");
scanf("%d", &price);
printf("Current savings: ");
scanf("%d", &savings);
printf("Monthly saving: ");
scanf("%d", &monthly);
while (savings < price)            /*while checks the condition before running
                                  If savings are already enough the loop is skipped
                                  months stays 0 and no monthly savings are printed*/
 {                                
 savings = savings + monthly;
 months++;
printf("Month %d: savings = %d\n",months,savings);
    }
printf("Sara can buy the laptop after %d month(s).\n", months);
return 0;
}