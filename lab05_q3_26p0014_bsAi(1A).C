/*A bank's ATM must ask the customer for their PIN before giving access. The correct PIN is
4321. The customer gets at most 3 attempts.
▶ After each wrong PIN, if attempts remain, display how many attempts are left and ask again.
▶ If the correct PIN is entered, display Access granted. and stop asking.
▶ If all 3 attempts are wrong, display Card blocked. Please contact your bank.
The PIN must be asked at least once, so use a do-while loop. The loop condition must check
both the PIN and the number of attempts.
Sample run 1:
Enter PIN: 1111
Wrong PIN. 2 attempt(s) left.
Enter PIN: 2222
Wrong PIN. 1 attempt(s) left.
Enter PIN: 4321
Access granted.
Sample run 2:
Enter PIN: 1
Wrong PIN. 2 attempt(s) left.
Enter PIN: 2
Wrong PIN. 1 attempt(s) left.
Enter PIN: 3
Card blocked. Please contact your bank.*/

#include <stdio.h>
int main()
{
int pin=0,attempts=0;
while(pin!=4321 && attempts<3)
{
printf("Enter PIN: ");
scanf("%d",&pin);
attempts++;
if(pin!=4321 && attempts<3)
{
printf("Wrong PIN. %d attempt(s) left.\n",3-attempts);
}
}
if(pin==4321)
{
printf("Access granted.\n");
}
else
{
printf("Card blocked. Please contact your bank.\n");
}
return 0;
}