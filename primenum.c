#include<stdio.h>
#include<conio.h>
#include<math.h>
void sieveonprime(int n )
{
    int a[100], i , p , j ; 
    for(i = 2 ; i<=n ; i++ )
        a[i] = i ; 
    for(p = 2 ; p<=sqrt(n) ; p++ )
    {
        if(a[p]!=0)
           i = p * p ;
        while(i<=n)
        {
            a[i] = 0 ; 
            i += p ; 
        }
    }
    for(j = 2 ; j<=n ; j++)
    {
         if(a[j]!= 0 )
         {
             printf("%d " , a[j]); 
         }
    }
}
int main()
{
    int n ; 
    printf("Enter a number to generate prime number upto that number :");
    scanf("%d" , &n ); 
    sieveonprime(n);
}
