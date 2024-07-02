#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[50] , n , i ; 
    printf("Enter the number of elements :");
    scanf("%d" , &n);
    printf("Enter %d elements of the array :");
    for( i =  0 ; i<n ; i++)
        scanf("%d" , &arr[i]);
    printarray(arr , n );
    quicksort(arr, 0 , n-1);
    printarray(arr , n );
    return 0 ; 
}
void printarray(int a[] , int n )
{
    int i ; 
    for( i = 0 ; i<n ; i++)
    {
        printf("%d " , a[i]);
    }
    printf("\n");
}
void swap(int a[] , int i , int j )
{
    int temp ; 
    temp = a[i];
    a[i]= a[j];
    a[j]= temp ;
}
void quicksort(int a[] , int low , int high)
{
    if(low < high)
    {
        int pivotindex = partition(a , low , high);
        quicksort(a , low , pivotindex-1);
        quicksort(a, pivotindex+1 , high );
    }
}
int partition(int a[] , int low , int high)
{
    int pivot , i , j , temp ; 
    i = low -1 ; 
    pivot = a[high];
    for( j = low ; j<high ; j++ )
    {
        if(a[j]<pivot)
        {
            i++ ; 
            temp = a[i];
            a[i]= a[j];
            a[j] = temp;
        }
    }
    i++ ; 
    temp = a[i];
    a[i]= a[high];
    a[high]= temp;
    return i ; 
}