#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Pcb  
{
    int pid ; 
    int pbursttime ; 
};
struct node
{
    int data ;
    int bursttime ; 
    struct node* link ; 
};
typedef struct node* NODE ; 
int main()
{
    NODE first  = NULL ;
    
    return 0 ; 
}