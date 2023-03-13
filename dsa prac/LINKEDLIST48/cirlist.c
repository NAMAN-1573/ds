/*The circular ink list can be of two types :1)singly circular link list'
2)Doubly circular link list if the last node of a singly link list contain the
address of first node tlhe it is called circular singly link list the address of
last node is given with the help of this node we can move to first node
pimtivite operations :
1)insert: at beginning at last at position
2)delete :at beginning at last at position
3)traversing */

#include<Stdio.h>
struct node
{
    int data;
    struct node *next;
}Node ;
void display(struct node *last);
struct node *add_beg(struct node *last, int value);
struct node *add_empty(struct node *last, int value);
struct node *add_end(struct node *last, int value);
struct node *add_after(struct node *last, int value, int item);
struct node *del(struct node *last, int data);
struct node *del(struct node *last, int data)
{
}
struct node *add_after(struct node *last, int value, int item)
{
    struct nod *t;
    t = last->next;
    struct node *n;
    do
    {
        if (t->data == item)
        {
            n = malloc(sizeof(struct node));
            n->data = value;
            n->next = t->next;
            t->next = n;
            if (t == last)
            {
                last = n;
            }
            return (last);
        }
        t = t->next;
    } while (t != last->next)
        printf("%d is not in the list", item);
    return (last);
}
struct node *add_end(struct node *last, int value)
{
    if (last == NULL)
    {
        add_empty();
    }
    else
    {
        struct node *n;
        n = malloc(sizeof(struct node));
        n->data = value;
        n->next = last->next;
        last->next = n;
        last = n;
        return (last);
    }
}
struct node *add_empty(struct node *last, int value)
{
    struct node *n;
    n = malloc(sizeof(struct node));
    n->data = value;
    while (last = NULL)
    {
        last = n;
        last->next = n;
        return (last);
    }
}
struct node *add_beg(struct node *last, int value)
{
    struct node *n;
    n = malloc(sizeof(struct node));
    n->data = value;
    n->next = last->next;
    last->next = n;
    return (last);
}
void display(struct node *last)
{

    if (last == NULL)
    {
        printf("\nlist is empty");
    }
    else
    {
        struct node *t;
        t = last->next;
        do
        {
            printf("\n%d ", t->data);
            t = t->next;
        } while (t != last->next);
    }
}