#include <stdio.h>

int *getfactors(int n);

int main(void)
{
    int *factors, n = 50, i;
    factors = getfactors(n);
    printf("The factors of %d are:\n", n);
    while(factors[i] != -1)
    {
        printf("%d\n", factors[i]);
        i++;
    }
    printf("\n");
    return 0;
}

int *getfactors(int n)
{
    int i;
    int actualfactors[10];
    int *factors = actualfactors;
    int index = 0;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            factors[index] = i;
            index++;
        }
    }
    factors[index] = -1;
    return factors;
}