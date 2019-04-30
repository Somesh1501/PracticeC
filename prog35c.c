//program to accept two digits and print their sum using functions.
#include <stdio.h>

void main()
{
    int a,b;
    printf("Enter a digit.>>>");
    scanf("%d",&a);
    printf("Enter a digit.>>>");
    scanf("%d",&b);
    printf("\n\nSum of %d and %d : %d",a,b, sum(a,b));
}

int sum(int a, int b)
{
    return a + b;
}
