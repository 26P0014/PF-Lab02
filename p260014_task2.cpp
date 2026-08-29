#include <stdio.h>
int main()
{
    int Batch=2026;
    char Section='A';
    float EntryTestScore=60.2;
    double SemesterFee=234000.92;

    printf("\t===============================\t");
    printf("\t\t\tFAST-NUCES STUDENT PROFILE CARD\t");
    printf("\t===============================\t");

    printf("\n\tBatch:\t%d\n",Batch);
    printf("\tSection:\t%c\n",Section);
    printf("\tEntryTestScore:\t%.2f\n",EntryTestScore);
    printf("\tSemesterFee:\t%.2f",SemesterFee);
    printf("\n\tMotto:\t\"Eat,Study,Sleep\"");
}