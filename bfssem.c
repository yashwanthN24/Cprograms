#include<stdio.h>
int a[100][100] , visited[50]  , result[100] , q[100] ,  f = 0 , r = -1  , k = 0 ; 
void bfs(int v , int n)
{
    int i ; 
    for(i = 1 ; i<=n ; i++)
    {
        if(a[v][i] == 1 && visited[i]!=1)
        {
            q[++r] = i ; 
            visited[i] = 1 ; 
        }
    }
    int u = q[f++];
    result[k++] = u ; 
    if(f<=r)
    {
        bfs(q[f] , n);
    }
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
    q[++r] = v ;
    bfs(v , n); 

}