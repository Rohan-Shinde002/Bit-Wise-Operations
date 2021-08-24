//PROGRAM TO GET Nth BIT OF A NUMBER

#include <stdio.h>

int main()
{
    int num=10, get=1, value;
   
    
    value = (num >> (get-1)) & 1;

    printf("The %d bit is set to %d", get, value);

    return 0;
}