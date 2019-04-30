// Program to print sum of given number and its reverse
#include <stdio.h>

void main()
{
    int a, res;
    printf("Enter a digit.>>>");
    scanf("%d",&a);
    res = a + rev(a);
    printf("Sum of reverse and given number is %d.",res);
}

int rev(int a)
{
    int x, res =0;
    while (a>0)
    {
        x = a%10;
        res = res*10+x;
        a = a/10;
    }
    return res;
}
