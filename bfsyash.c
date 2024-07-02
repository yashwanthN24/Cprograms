#include<stdio.h>
void bfs(int gra[][10] , int n , int src )
{
    int q[100] , f = 0 , r = -1 , visited[10] = {0} , i  ; 
    q[r++] = src ; 
    visited[src] =1 ;
    printf("%d" , q[f]); 
    while(f<=r)
    {
        for(i = 0 ; i<n ; i++)
        {
            if(gra[q[f]][i] ==1  && visited[q[f]] )
        }
    }
    bfs(gra , n )
}
int main()
{
    int grap[10][10] , n , i  , j , start ; 
    printf("Enter the no of vertices of graphs:"); 
    scanf("%d" , &n); 
    printf("Enter the graph:"); 
    for(i = 0 ; i<n ; i++)
    {
        for(j = 0 ; j<n ; j++)
        {
            printf("%d -> %d :" , i , j ); 
            scanf("%d" , &grap[i][j]); 
        }
    }
    printf("Enter the starting vertex for traversal"); 
    scanf("%d" , &start);
    bfs(grap , n , start); 
}