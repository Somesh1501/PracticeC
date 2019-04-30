//program to accept a number and find its factorial using functions.

#include <stdio.h>

void main()
{
    int a;
    printf("\t\tFACTORIAL\n");
    printf("Enter a digit.>>> ");
    scanf("%d", &a);
    printf("Factorial of %d : %d", a, fact(a));
}

int fact(int a)
{
    int i, res=1;
    for (i=a;i>=1;i--)
    {
        res *= i;
    }
    return res;
}
