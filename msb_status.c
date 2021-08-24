//PROGRAM TO CHECK MSB OF A NUMBER IS SET OR NOT

#include <stdio.h>

int main()
{
    int num=-1, msb;

    msb = 1 << (num - 1);

    if(num & msb)
        printf("MSB of %d is set (1).", num);
    else
        printf("MSB of %d is unset (0).", num);

    return 0;
}