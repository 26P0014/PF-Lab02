/*Write a C program that takes the coordinates x and y of a point as input. Using an if / else
if / else ladder, determine and display exactly one of the following: Quadrant I, Quadrant
II, Quadrant III, Quadrant IV, Origin (if x = 0 and y = 0), On the X-axis (if y = 0 and
x ̸= 0), or On the Y-axis (if x = 0 and y ̸= 0). Test your program with (3, 5), (-2, 4), (-1,
-6), (7, -3), (0, 0), (5, 0), and (0, -5).*/
#include <stdio.h>
int main(){
double x,y;
printf("Enter x and y: ");
scanf("%lf %lf",&x,&y);
if(x>0 && y>0)
printf("Quadrant I");
else if(x<0 && y>0)
printf("Quadrant II");
else if(x<0 && y<0)
printf("Quadrant III");
else if(x>0 && y<0)
printf("Quadrant IV");
else if(x==0 && y==0)
printf("Origin");
else if(y==0)
printf("On the X-axis");
else
printf("On the Y-axis");
return 0;
}