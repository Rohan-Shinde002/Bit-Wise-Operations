//PROGRAM TO SET Nth BIT OF A NUMBER

#include <stdio.h>


int main()
{
    int n = 10, k = 1;
    printf("%d",((1 << (k-1)) | n));
    return 0;
}