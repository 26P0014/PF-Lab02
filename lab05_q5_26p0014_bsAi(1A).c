/*5 QUESTION#5: University Canteen Order (do-while loop)
The university canteen needs an ordering program. It must display the menu below repeatedly
until the customer chooses Checkout:

Choice Item Price (Rs)
1 Tea 60
2 Samosa 40
3 Sandwich 180
4 Checkout 

▶ For choices 1 to 3, ask for the quantity, add the cost to the bill, and display the current bill.
▶ For any choice other than 1 to 4, display Invalid choice. Try again. and show the
menu again.
▶ At checkout, if the bill is more than Rs 1000, give a 10% discount.
▶ Display the total number of items ordered, the bill, the discount, and the amount payable.
Sample run (... marks where the menu is displayed again):
Enter choice: 1
Quantity: 2
Current bill: Rs 120
...
Enter choice: 3
Quantity: 5
Current bill: Rs 1020
...
Enter choice: 7
Invalid choice. Try again.
...
Enter choice: 2
Quantity: 3
Current bill: Rs 1140
...
Enter choice: 4
Total items: 10
Bill: Rs 1140
Discount: Rs 114
Payable: Rs 1026*/

#include <stdio.h>
int main()
{
int choice=0,quantity,price,items=0,bill=0;
float discount=0,payable;
while(choice!=4)
{
printf("\n1 Tea Rs 60\n");
printf("2 Samosa Rs 40\n");
printf("3 Sandwich Rs 180\n");
printf("4 Checkout\n");
printf("Enter choice: ");
scanf("%d",&choice);
if(choice>=1 && choice<=3)
{
printf("Quantity: ");
scanf("%d",&quantity);
while(quantity<1)
{
printf("Enter a quantity of at least 1: ");
scanf("%d",&quantity);
}
if(choice==1)
{
price=60;
}
else if(choice==2)
{
price=40;
}
else
{
price=180;
}
bill=bill+price*quantity;
items=items+quantity;
printf("Current bill: Rs %d\n",bill);
}
else if(choice!=4)
{
printf("Invalid choice. Try again.\n");
}
}
if(bill>1000)
{
discount=bill*0.10f;
}
payable=bill-discount;
printf("Total items: %d\n",items);
printf("Bill: Rs %d\n",bill);
printf("Discount: Rs %.2f\n",discount);
printf("Payable: Rs %.2f\n",payable);
return 0;
}













