// Program to check whether given digit is ARMSTRONG or NOT.
#include <stdio.h>

void main()
{
    int a, n;
    printf("\t\tARMSTRONG OR NOT\n");
    printf("Enter a number.>>>");
    scanf("%d", &a);
    n = arm(a);
    if (n==a){
        printf("The given digit is ARMSTRONG.");
        }
    else
        printf("The given digit is NOT a ARMSTRONG.");

}

int arm(int a)
{
    int x,y,z;
    x = a/100;
    y = a%10;
    z = (a/10)%10;
    return x*x*x+y*y*y+z*z*z;
}
