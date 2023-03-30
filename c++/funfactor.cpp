#include <iostream>
using namespace std;
void factor();
int main()
{
    factor();
}
void factor()
{
    int n=60, i;

    for (int i = 1; i <= n; i++)
    {
        if (n%i==0)
       {
        cout<<i<<" ";
       }
    }  
}
