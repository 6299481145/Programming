#include <stdio.h>
int main() {
    int n1= 36, n2=60, i, j;
    
    printf("Factors of %d are: ", n1);
    
    for(i=1; i <= n1; i++ ) {
        if(n1%i==0 ) {
            printf("%d ", i);
        }
        
    }
    printf("\nFactors of %d are: ", n2);
    for(j=1; j <= n2; j++) {
        if( n2%j==0) {           
            printf("%d ", j);
        }        
    }
    return 0;
}