#include <stdio.h>

int main()
{
    int n, m, arrA[10], arrB[10];
    printf("NAME : NAMAN MISHRA \n");
    printf("ROLL NO. = 2100320120113\n");
    printf("Enter the number of elements of Array A: ");
    scanf("%d", &n);

    printf("\nEnter the elemnts of the array A: ");
    for (int i = 0; i < n; i++)
    {
        printf("Enter arr[%d]: ", i);
        scanf("%d", &arrA[i]);
    }
    printf("\nEnter the number of elements of Array B: ");
    scanf("%d", &m);
    printf("\nEnter the elemnts of the array A: ");
    for (int i = 0; i < m; i++)
    {
        printf("Enter arr[%d]: ", i);
        scanf("%d", &arrB[i]);
    }
    printf("\nThe Cartesian Product of two array is: \n");
    printf("{ ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("(");
            printf("%d, %d", arrA[i], arrB[j]);
            printf("), ");
        }
    }
    printf("}");
    return 0;
}
