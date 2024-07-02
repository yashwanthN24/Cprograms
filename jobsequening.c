#include<stdio.h>
#include<conio.h>
void swap( int *m , int *n )
{
    int temp = *m  ; 
    *m = *n ; 
    *n = temp ; 
}
void sort(int (*jobs)[20] , int n )
{
    int i , j , k =1 , temp , l = 0 , m = 2  ; 
    for( i = 0 ; i < n-1 ; i++ )
    {
        for(j = 0  ;j < n-1-i ; j++)
        {
            if(jobs[k][j] < jobs[k][j+1])
            {
                swap(&jobs[k][j] , &jobs[k][j+1]); 
                swap(&jobs[l][j] , &jobs[l][j+1]); 
                swap(&jobs[m][j] , &jobs[m][j+1]); 
            }
        }
    }
}
int  findmaxduration(int (*jobs)[20] , int n  )
{
    int max = jobs[2][0]  , i , j ;
    for(i = 0 ; i<n ; i++)
    {
        if(jobs[1][i] > max)
            max = jobs[1][i]; 
    } 
    return max ;     
}
int main()
{
    int n ,  job[3][20] , i , j , max , slots[10] , test, f =2 ;  
    printf("Enter the no of :"); 
    scanf("%d" , &n);
    printf("Enter the job id , profits and deadlines of the jobs:");  
    for(i = 0 ; i<3 ; i++)
    {   
        for(j = 0 ; j<n ; j++)
        {
            scanf("%d" , &job[i][j]);
        }
    }
    sort(job , n ); 
    // printf("The Jobs table is :");
    // for(i = 0 ; i<3 ; i++)
    // {
    //     for( j = 0 ; j < n ; j++)
    //     {
    //         printf("%d  " ,job[i][j]);
            
    //     }
    //     printf("\n"); 
    // }
    max=findmaxduration(&job[2] , n ); 
    for(i = 0 ; i<=max ; i++)
    {
        slots[i] = -1 ; 
    }
    //
    
    for( i = 0 ; i<3 ; i++)
    {
        for(j = 0 ; j< n ; j++)
        {
            test = job[f][j]; 
            if(test <= max)
            {
                if(slots[test] != -1)
                {
                    slots[test-1] = job[i][j]; 
                }
                slots[test] = job[i][j]; 
            }
        }
    }
    for(i = 0 ; i<max ; i++)
        printf("%d  " , slots[i]); 

}