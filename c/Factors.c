#include<stdio.h>
int main(void)
{
    int n=50, i;

    for ( i = 1; i <=n; i++)
    {
        if (n%i==0)
        {
            printf(" %d",i);
        }    
    }
    return 0;
}