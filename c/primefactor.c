#include<stdio.h>
int main(void)
{
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("The factors of %d are ", n);
    for ( i = 2; i<n; i++)
    {
        if (n%i==0 )
        {
            printf("%d ",i);
            n=n/i;
        }    
    }
    return 0;
}