#include <stdio.h>
int main()
{
    char ch='M';
    int num=42;
    float f=3.141590;
    double d=98.765432;
    printf("\tTYPE NAME\tVARIABLE VALUE\tSIZE IN MEMORY");
    printf("\n===================================================");
    printf("\n\tChar\t\t'%C'\t\t\t\t%zu bytes(s)\n",ch,sizeof(ch));
    printf("\n\tint\t\t\t%d\t\t\t\t%zu bytes(S)\n",num,sizeof(num));
    printf("\n\tfloat\t\t%f\t\t%zu bytes(s)\n",f,sizeof(f));
    printf("\n\tdouble\t\t%.6f\t\t%zu bytes(s)",d,sizeof(d));
}
