#include <stdio.h>

void main()
{
    int a;
    printf("Enter a digit.>>>");
    scanf("%d", &a);
    printf("%d", rev(a));
}

int rev(int n)
{
    int r, rev=0;
    while (n>0)
    {
        r = n % 10;
        rev = rev*10+r;
        n=n/10;
    }
    return rev;
}
