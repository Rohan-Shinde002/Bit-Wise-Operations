
//PROGRAM TO DISPLAY COMMON ELEMENTS FROM 2 ARRAYS

#include <stdio.h>

int main()
{
    
    int a1[]={1,2,4};
    int a2[]={3,2,1};
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if((a1[i]^a2[j])==0)
            {
                printf("%d",a1[i]);
            }
        }
    }
    return 0;
}