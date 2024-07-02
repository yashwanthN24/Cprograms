#include<stdio.h>
void fracknap(int m , int n , int w[] , int x[])
{
    for(int i = 1 ; i<=n ; i++ )
        x[i] = 0 ; 

    int rc = m ; 
    for(int i = 1 ; i<=n ; i++)
    {
        if(w[i]>rc)
            break ; 
        if(rc!=0 && (w[i]>rc))
            x[i] = rc/w[i]; 
        x[i] = 1 ; 
        rc = rc - w[i]; 
    }
}
int  main()
{
    int weight[] = {20 , 25 , 10};
    int x[100]; 
    fracknap(40 , 3 , weight , x); 
    for(int  i = 1 ; i<=3 ; i++)
        printf("%d "  , x[i] );
    return 0; 
}