#include<stdio.h>
int a[100][100] ,result[100] ,  visited[50] , s[100] , top =-1 , u = 0  ; 
void dfs(int v , int n )
{
    int i; 
    
    result[u++]  = v ; 
    
    for(i = 1 ; i<=n ; i++)
    {
        if(a[v][i]==1 && visited[i]!=1)
        {
            visited[i]= 1 ; 
            s[++top] = i ;
            dfs(i , n); 
        }
    }
    if(top>-1)
        dfs(s[top] , n);
}
int main ()
{
    int n , i , j  , v  ; 
    printf("Enter the number of vertices :" ); 
    scanf("%d" , &n); 
    printf("Enter the cost adjancy matrix :"); 
    for(i = 1 ; i<=n ; i++)
        for(j = 1 ; j<=n ; j++)
            scanf("%d"  , &a[i][j]); 
    printf("Enter the source vertex:" ); 
    scanf("%d" , &v); 
    visited[v]= 1 ; 
    s[++top] = v;
    dfs(v , n); 

}