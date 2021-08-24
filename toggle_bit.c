// PROGRAM TO TOGGLE Nth BIT OF A NUMBER
 
#include <stdio.h>

int main()
{
    int n = 5, loc = 1;
 
    printf("%d\n", (n ^ (1 << (loc - 1))));
 
    return 0;
}