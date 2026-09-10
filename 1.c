/*A car travelled for some hours. Take the number of hours travelled and the distance travelled
during this time as input at runtime. Write a C program to calculate the average speed and
display it on the screen. Use hours for time and kilometres for distance; assume the time is
positive and the distance is nonnegative. Display the speed in kilometres per hour.*/

#include<stdio.h>
int main()
{
float km,hours,avg_speed;
printf("\n enter total distance :");
scanf("%f",&km);
printf("\n enter total time :");
scanf("%f",&hours);
 avg_speed=km/hours;
printf("\n the average speed is : %.2f km/h",avg_speed);
return 0;
}



