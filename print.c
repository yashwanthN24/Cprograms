#include<stdio.h>
void test(int n )
{
    if(n>0)
    {
        printf("%d" , n); 
        test(n-1); 
    }
}
int main()
{
    test(3); 
    return 0 ; 
}