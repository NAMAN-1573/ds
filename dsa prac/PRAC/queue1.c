#include <stdio.h>
#define size 5
struct queue
{
    int data[size];
    int front;
    int rear;
} lq;
void menu()
{
    int choice;
    printf("\n1........Insertion\n");
    printf("2........deletion\n");
    printf("3........Show\n");
    printf("4........Exit\n");
    printf("Enter your chocie:");
}
void insertion()
{
    int item;
    if (lq.rear == size - 1)
    {
        printf("QUEUE IS FULL\n");
    }
    else
    {
        printf("Enter item :");
        scanf("%d", &item);
        lq.rear++;
        lq.data[lq.rear] = item;
        if (lq.front == -1)
            lq.front++;
        printf("\nItem Inserted\n  ");
        printf("\nfront=%d, rear=%d", lq.front, lq.rear);
    }
}
void deletion()
{
    int item;

    if (lq.front == -1)
    {
        printf("QUEUE IS EMPTY\n");
    }
    else
    {
        item = lq.data[lq.front];
        lq.front++;
        if (lq.front > lq.rear)
        {
            lq.front = lq.front = -1;
        }
        printf("\nDELETED ITEM : %d", item);
        printf("\nfront=%d , rear=%d", lq.front, lq.rear);
    }
}
void show()
{
    if (lq.front == lq.rear == -1)
    {
        printf("\nQUEUE IS EMPTY");
    }
    else
    {
        printf("\nQueue Items\n");
        for (int i = lq.front; i < lq.rear; i++)
        {
            printf("%d ",lq.data[i]);
        }
        
    }
     printf("\nfront=%d , rear=%d", lq.front, lq.rear);

}

int main()
{
    int choice;
    lq.rear = lq.front = -1;
    do
    {
        menu();
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insertion();
            break;
        case 2:
            deletion();
            break;
        case 3:
            show();
            break;
        case 4:
            printf("THANKS FOR VISITING\n");
            break;
        default:
            printf("Invalid\n");
        }
    } while (choice != 4);
    return 0;
}