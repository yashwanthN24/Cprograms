#include<stdio.h>
#include<conio.h>
int gcd(int m , int n )
{
    int r ; 
    while(r!=0) {
    r = m % n ; 
    m = n ; 
    n = r ;
    }
    return m ; 
}
int gcdr(int m ,int n )
{
   int r ;
   r = m % n ;
   if(r== 0 )// why because r = 0 is identified by in these recursive calls unlike in a while loop where r is the same variable
      return n ; 
   return gcdr(n , r) ;
}
int gcds(int m ,int n )
{
      while(m!=n)
      {
         if(m>n)
           m = m -n ; 
         else 
           n = n-m; 
      }
      return m ; 
}
int gcdsr(int m , int n )
{
     if(m==n)
       return n ; 
     if(m>n)
        return gcdsr(m-n,n);
     else 
        return gcdsr(m , n -m);  
}

int main()
{
     int a, b , res ; 
     printf("Enter two numbers to find gcd:");
     scanf("%d%d" , &a , &b );
     res = gcdsr(a, b); 
     printf("The gcd of %d and %d is %d " , a , b , res);
     return 0 ;
}
// to generate asm code use gcc -S filename.c this tells compiler to generate the asm file 