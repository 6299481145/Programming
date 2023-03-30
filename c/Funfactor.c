#include<stdio.h>
int main(void)
{
    factor();
}
factor()
{
    int n=15, i;

    for ( i = 1; i <=n; i++)
    {
        if (n%i==0)
        {
            printf(" %d",i);
        }    
    }
}