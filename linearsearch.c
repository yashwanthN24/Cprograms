#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void linearsearch(int a[] , int n , int key)
{
    int i ; 
    for(i = 0 ; i<n ; i++ )
    {
         if(key == a[i])
         {
            printf("%d element is present at %d" , key , i+1 );
            exit(0);
         }
    }
    printf("Unsuccessful search");
}
int main()
{
    int a[50] , n , key , i ; 
    printf("Enter the number of elements :");
    scanf("%d" , &n); 
    printf("Enter %d elements:");
    for( i = 0 ; i<n ; i++)
        scanf("%d" , &a[i]);
    printf("Enter the key element");
    scanf("%d" , &key);
    linearsearch(a ,n , key);
}