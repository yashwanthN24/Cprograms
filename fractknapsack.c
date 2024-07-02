#include<stdio.h>
// int findmax(int *p , int n , int max)
// {
//     int i = 0 , max ;
//     for(i = 0 ; i<n ; i++)
//     {
//        if(p[i]> max )
//         max = p[i]; 
//     } 
//     return max ; 
// }
int main()
{
    int objects[3][20] , i , bagwt , pbyw[10] , selected[10] , maxprowt;
    printf("Enter the no of objects:");     
    scanf("%d" , &n); 
    printf("Enter the objectno , profit and weight of the object :"); 
    for(i = 0 ; i<n ; i++)
    {
    scanf("%d %d %d " , &objects[0][i] ,&objects[1][i] , &objects[2][i] ); 
    }
    printf("Enter the weight of the knapsack bag :"); 
    scanf("%d" , &bagwt); 
    // calculate p/w ratio 
    for(i = 0 ; i<n ; i++)
    {
        pbyw[i] = objects[1][i]/objects[2][i]; 
    }
    int *p = (int*)malloc(sizeof(int)*bagwt); 
    
    return 0 ; 
}