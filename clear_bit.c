//PROGRAM TO CLEAR Nth BIT OF A NUMBER

#include <stdio.h>

int main()
{
    int n = 5, k = 3;
 
    printf("%d\n", (n & (~(1 << (k - 1)))));
 
    return 0;
}