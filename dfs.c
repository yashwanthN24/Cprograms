#include<stdio.h>
int n , gra[10][10] , top = -1 , visited[10] , s[100]; 
void dfs(int v)
{
    int i ;
    if(top == -1 )
    {
        return ; 
    } 
    printf("%d" , v);
    visited[v] = 1 ; 
    s[++top] = v ;
    for(i = 0 ; i<n ; i++)
    {
    if(gra[v][i] ==1 && visited[i] != 1)
    {
        dfs(i); 
    }
    dfs(top--); 

    } 
}