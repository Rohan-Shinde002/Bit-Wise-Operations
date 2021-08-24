
//PROGRAM TO FIND WHETHER LSB IS SET OR NOT

#include <stdio.h>

int main()
{
    int num;

    
    printf("Enter any number: ");
    scanf("%d", &num);

    
    if(num & 1)         //Here bitwise & converts num to binary and does ANDing with 1 
        printf("\nLSB of %d is set ", num);
    else
        printf("\nLSB of %d is unset", num);

    return 0;
}