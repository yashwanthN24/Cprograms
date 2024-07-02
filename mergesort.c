#include<stdio.h>
void merge(int a[]  , int low , int mid , int high)
{
    int i , j , k , b[100]; 
    i = low ; 
    j = mid +1 ; 
    k = low ;
    while(i<=mid && j<=high)
    {
        if(a[i]>a[j])
        {
            b[k++] = a[j]; 
            j++ ; 
        }
        else
        {
            b[k++] = a[i];
            i++; 
        }
    }
    while(i<=mid )
    {
        b[k++] = a[i++]; 
    }
    while(j<=high)
    {
        b[k++] = a[j++];
    }
    for( k = low ; k<=high ; k++)
        a[k] = b[k];
}
void mergesort(int a[]  , int low , int high)
{
    int mid ; 
    if(low < high)
    {   
        mid = (low + high)/2 ; 
        mergesort(a , low , mid ); 
        mergesort(a , mid +1 , high);
        merge(a , low , mid , high); 
    }
}
int main()
{
    int a[] = {90, 10 , 45 , 40 , 25 , 50 , 30 , 65 }; 
    int n = sizeof(a)/sizeof(int); 
    mergesort(a , 0 , n-1  );
    for( int i = 0 ; i<n ; i++)
    {
        printf("%d "  , a[i]);
    }
    return 0 ;  
}