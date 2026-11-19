#include <stdio.h>
int main()
{
int age;
float cgpa;
char grade;
int *pAge = &age;
float *pCgpa = &cgpa;
char *pGrade = &grade;
printf("Enter age: ");
scanf("%d", pAge);
printf("Enter CGPA: ");
scanf("%f", pCgpa);
printf("Enter grade: ");
scanf(" %c", pGrade);
printf("age = %d via pointer = %d &age = %p pAge = %p\n",
age, *pAge, (void *)&age, (void *)pAge);
printf("cgpa = %.2f via pointer = %.2f &cgpa = %p pCgpa = %p\n",
cgpa, *pCgpa, (void *)&cgpa, (void *)pCgpa);
printf("grade = %c via pointer = %c &grade = %p pGrade = %p\n",
grade, *pGrade, (void *)&grade, (void *)pGrade);
printf("&pAge = %p &pCgpa = %p &pGrade = %p\n",
(void *)&pAge, (void *)&pCgpa, (void *)&pGrade);
*pAge = *pAge + 1;
*pCgpa = *pCgpa + 0.25f;
*pGrade = *pGrade + 1;
printf("After changing through pointers:\n");
printf("age = %d, cgpa = %.2f, grade = %c\n", age, cgpa, grade);
return 0;
}