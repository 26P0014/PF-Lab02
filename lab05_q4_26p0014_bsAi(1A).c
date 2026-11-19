/*4 QUESTION#4: Class Result Summary (for loop)
A teacher wants a quick summary of a quiz. Take the number of students as input (at least 1),
then take the marks of each student (0 to 100). A student passes with marks of 50 or more.
Display:
▶ the number of students who passed and who failed,
▶ the highest marks in the class, and
▶ the class average as a float to two decimal places.
Hint: Use an explicit cast to calculate the average without losing the fractional part.

2

FASTNUCES Lab 05: Loop Tasks

Sample run:
Number of students: 5
Marks of student 1: 78
Marks of student 2: 45
Marks of student 3: 90
Marks of student 4: 50
Marks of student 5: 32
Passed: 3
Failed: 2
Highest: 90
Average: 59.00*/

#include <stdio.h>
int main()
{
int students,marks,i,passed=0,failed=0,highest=0,total=0;
float average;
printf("Number of students: ");
scanf("%d",&students);
while(students<1)
{
printf("Enter at least 1 student: ");
scanf("%d",&students);
}
for(i=1;i<=students;i++)
{
printf("Marks of student %d: ",i);
scanf("%d",&marks);
while(marks<0 || marks>100)
{
printf("Enter marks from 0 to 100: ");
scanf("%d",&marks);
}
if(marks>=50)
{
passed++;
}
else
{
failed++;
}
if(marks>highest)
{
highest=marks;
}
total=total+marks;
}
average=(float)total/students;
printf("Passed: %d\n",passed);
printf("Failed: %d\n",failed);
printf("Highest: %d\n",highest);
printf("Average: %.2f\n",average);
return 0;
}