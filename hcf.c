#include<stdio.h>
#include<conio.h>
#include<math.h>
void sieveofprime(int n , int a[])
{
      int  i , j , p ; 
     for(i = 2 ; i<=n ; i++ )
        a[i] = i ; 
     for(p = 2 ; p<=sqrt(n) ; p++)
      {
         if(a[p]!=0)
           i = p * p ; 
         while(i<=n)
          {
             a[i] = 0 ; 
             i+= p ; 
          }
      }
      for(j = 2 ; j<=n ; j++)
        {
             if(a[j]!=0)
               printf("%d " , a[j]);
        }
      
}
void primefactfromsieve(int arr[] , int n , int b[])
{
    int i , j , k = 0 ;
    for(i = 2 ; i<=n ; i++)
       {
        if(arr[i]!=0)
        {
        if(n%arr[i] == 0)
        {

           b[k] = arr[i];
           k++ ; 
        }
        else
        {
          b[k] = 0 ; 
          k++ ; 
        }

        }
       }
}
int main()
{
     int a , b  ,arr[50] , arr1[50] ,prime[50], i = 0  , j  , k=0,gcd= 1 , prime1[50] , tempfact[50];
     printf("Enter two  numbers a and b : ");
     scanf("%d%d" , &a , &b );
     sieveofprime(a,arr);
     printf("\n");
     sieveofprime(b,arr1);
     primefactfromsieve(arr , a ,  prime);
     primefactfromsieve(arr1 , b , prime1);
     int l1 = sizeof(prime)/sizeof(prime[0]);
     int l2 = sizeof(prime)/sizeof(prime[0]);
     printf("\n");
       while(i<l1 && i<l2)
       {
           if(prime[i]==prime1[i])
           {
              tempfact[i] = prime1[i];
              i++ ; 
           }
           else
           {
            tempfact[i] = 0 ; 
            i++ ; 
           }
           
       }
       int l21 = sizeof(tempfact)/sizeof(tempfact[0]);
       for(i = 0 ;i<l21 ; i++)
       {
        if(tempfact[i]!=0 && a % tempfact[i]==0 && b %tempfact[i]==0)
           printf("%d  " , tempfact[i]);
       }
       printf("\n");
       for( i = 0 ; i<l21 ; i++)
       {
         if((tempfact[i]!=0))
         {
             gcd = gcd*tempfact[i];
             
         }

       }
       printf("The gcd of %d and %d is %d " , a, b , gcd);
     return 0 ; 

}