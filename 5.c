
/*Write a C program that takes integer marks for three subjects, each from 0 to 100. Store the
total in an integer variable. Use an explicit cast to calculate the average as a float without
losing the fractional part. Display the total and average. Test your program with marks 70, 75,
and 80, and then with 70, 75, and 81 to show both a whole and a fractional average.*/

#include<stdio.h>
int main()
{
int marks1, marks2, marks3, total;
float average;
printf("Enter marks for first subject: ");
scanf("%d", &marks1);
printf("Enter marks for second subject: ");
scanf("%d", &marks2);
printf("Enter marks for third subject: ");
scanf("%d", &marks3);
total = marks1 + marks2 + marks3;
average = (float)total / 3;/*explicit casting,(float)*/
printf("\ntotal: %d", total);
printf("\naverage: %.2f", average);
return 0;
}