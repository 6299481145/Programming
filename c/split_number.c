#include<stdio.h>

int main()
{
    int n = 132, mod;
    
    while(n > 0) 
    {
    mod = n % 10;
    printf("%d\n",mod);
        n = n / 10;
    }
    return 0;
}