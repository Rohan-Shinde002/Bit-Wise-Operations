//PROGRAM TO SWAP USING BITWISE OPERATORS

#include <stdio.h>

int main() 
{
    int i = 65,k = 120;
    printf("Value of i=%d and k=%d before Swapping", i, k);

    i = i ^ k;
    k = i ^ k;
    i = i ^ k;
    printf("\nValue of i=%d and k=%d after Swapping", i, k);

    return 0;
}