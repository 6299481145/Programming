#include<iostream>
using namespace std;
int main()
{
    int number=13;
    int digit[2];

    for(int i=0; i<2 ; i++)
    {
        digit[i]=number%10;
        number=number/10;
    }
    
    for(int j=1 ; j>=0 ; j-- )
    {
        cout<<digit[j]<<" ";
    }
}