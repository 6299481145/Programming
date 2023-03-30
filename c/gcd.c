#include <stdio.h>
int main()
{
    int a=24, b=36;

    while (a != b)
    {
       if (a>b)
       {
        a=a-b;
       }
       else
       {
        b=b-a;
       }  
    }
    printf("GCD of two numbers 24 and 36 is %d.",b);
    return 0;
}