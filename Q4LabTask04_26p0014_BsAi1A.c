/*Write a C program that takes a person’s weight in kilograms and height in metres as input and 
computes the Body Mass Index using
BMI =

weight
height × height.

Using an if / else if / else ladder, classify and display the result as:
▶ Underweight – BMI below 18.5,
▶ Normal – BMI from 18.5 up to (but not including) 25,
▶ Overweight – BMI from 25 up to (but not including) 30,
▶ Obese – BMI of 30 or above.
Display the computed BMI value along with its category. Test your program with weight 70 kg
/ height 1.75 m, and with weight 95 kg / height 1.70 m.*/
#include <stdio.h>
int main(){
double weight,height,bmi;
printf("Enter weight in kilograms: ");
scanf("%lf",&weight);
printf("Enter height in metres: ");
scanf("%lf",&height);
bmi=weight/(height*height);
printf("BMI: %.2f\n",bmi);
if(bmi<18.5)
printf("Underweight");
else if(bmi<25)
printf("Normal");
else if(bmi<30)
printf("Overweight");
else
printf("Obese");
return 0;
}