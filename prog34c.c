//Program to print prime numebers from 1 to 100.

#include <stdio.h>

void main()
{
    int a, i, res;
    for (i=1;i<=100;i++)
    {
        res = 1;
        for (a=2 ;a<=i/2;a++)
        {
            if (i%a==0)
            {
                res=0;
                break;
            }
        }
        if (res==1)
        printf("%d\n",i);
    }
}
