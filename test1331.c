#include<stdio.h>
int main()
{
    int a = 23 ; 
    int *nb = &a ; 
    printf(" %.60f  %d %d %d " , *((float *)nb) , *nb  , sizeof(float) , sizeof(int));
    return 0 ; 
}