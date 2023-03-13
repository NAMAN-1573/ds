#include <stdlib.h>
#include <stdio.h>

typedef struct Node
{
    int coef;
    int power;
    struct Node *next;
} Node;

// initialize the linked list
Node *initialize()
{
    return NULL;
}

// create a new node
Node *createNode(int x, int y)
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->coef = x;
    node->power = y;
    node->next = NULL;
}

// insert node at last
void insert_last(Node **start, int x, int y)
{
    Node *newNode = createNode(x, y);
    if (*start == NULL)
    {
        *start = newNode;
    }
    else
    {
        Node *temp = *start;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

Node *search(Node *start, int y)
{
    Node *current = start;
    while (current != NULL)
    {
        if (current->power == y)
            return current;
        current = current->next;
    }
    printf("\nNode with %d value not found", y);
    return NULL;
}

// check for the empty of linked list
int isEmpty(Node *start)
{
    if (start == NULL)
    {
        printf("\nEmpty List");
        return 1;
    }
    return 0;
}

// show all the nodes
void show(Node *start)
{
    if (!isEmpty(start))
    {
        printf("\nLinked list is\n");
        while (start != NULL)
        {
            if (start->coef >= 0)
                printf("+");
            printf("%dx^%d", start->coef, start->power);
             start=start->next;
        }
    }
}