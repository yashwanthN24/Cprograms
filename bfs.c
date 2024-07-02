#include <stdio.h>

int n, i, j, visited[10], q[10], front = 0, rear = -1;
int adj[10][10];

void bfs(int v)
{
    int i  , cur; 
    visited[v] = 1 ; 
    q[++rear] = v ; 
    while(front<=rear)
    {
        cur = q[front++]; 
        printf("%d "  , cur ); 

        for( i = 1 ; i<=n ; i++)
        {
            if(adj[cur][i] == 1 && visited[i]== 0 )
            {
                q[++rear] =  i ; 
                visited[i]  = 1 ; 
            }
        }
    }
    //1.visit the node by printing it 
    // int i , cur ; 
    // visited[v] = 1 ;
    // q[++rear] = v ;  
    // //2.Explore the all its immediate neighbours  neighbours
    // while(front <= rear)
    // {
    //     cur = q[front++];
    //     printf("%d" , cur ); 
    //     for( i = 0 ; i<n ; i++)
    //     {
    //     if(adj[cur][i] && visited[i]==0)
    //     { 
    //         q[++rear] = i ; 
    //         visited[i] =1 ; 
    //     }
            

    //     } 
    // }
    
}
 
void main()
{
    int v;
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        q[i] = 0;
        visited[i] = 0;
    }
    printf("Enter graph data in matrix form:    \n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &adj[i][j]);
    printf("Enter the starting vertex: ");
    scanf("%d", &v);
    bfs(v);
}