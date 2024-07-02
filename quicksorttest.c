#include<stdio.h>
int yash ; 
int partition(int a[] , int low , int high)
{
    int pivot = a[low] , st = low , end = high  , temp  ; 
    while(st<end)
    {
        while(a[st] <= pivot)
            st++ ; 
        while(a[end] > pivot)
            end--;
        if(st<end)
        {
            temp = a[st]; 
            a[st]= a[end]; 
            a[end] = temp ; 
        }
    }
    temp = a[low]; 
    a[low] = a[end]; 
    a[end] = temp ; 
    return end ;
    
}
void quicksort(int a[]  , int low , int high)
{
    int pivotindex ; 
    if(low < high)
    {
        pivotindex = partition(a , low , high); 
        quicksort(a , low , pivotindex-1); 
        quicksort(a , pivotindex+1 , high); 
    }
}
int main()
{
    int a[] = {100, 60 , 50 , 90 , 5 , 10 , 30}; 
    int n = sizeof(a)/sizeof(int); 
    quicksort(a , 0 , n-1 ); 
    for(int i = 0 ; i<n ; i++)
    {
        printf("%d " ,a[i]); 
    }
    return 0 ; 
}