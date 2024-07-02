#include <stdio.h>
struct node
{
    int info;
    struct node *link;
    /* data */
};
typedef struct node *NODE;
void insertrear(NODE *first, int item)
{
    NODE temp, cur;
    printf("%p\n", temp);
    temp = (NODE)malloc(sizeof(struct node));
    printf("%p\n", temp);
    temp->info = item;
    temp->link = NULL;
    if (*(first) == NULL)
    {
        *first = temp;
        return;
    }
    cur = *first;
    while (cur->link != NULL)
    {
        cur = cur->link;
    }
    cur->link = temp;
}
void display(NODE first)
{
    NODE cur;
    if (first == NULL)
    {
        printf("List is empty");
        return;
    }
    cur = first;
    while (cur != NULL)
    {
        printf("%d ->  ", cur->info);
        cur = cur->link;
    }
}
int main()
{
    NODE first = NULL;
    insertrear(&first, 12);
    insertrear(&first, 18);
    insertrear(&first, 19);
    display(first);
    return 0;
}