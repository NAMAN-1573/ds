#include <stdio.h>
#include <math.h>
int main()
{
    int a[100], m;
    int c, n, i, j;
    printf(" Name:-NAMAN MISHRA\n");
    printf("Roll no.:-2100320120113 \n");
    printf("enter the size of set A:");
    scanf("%d", &m);
    printf("Enter the elements of set A :");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }
    c = pow(2, m);
    for (i = 0; i < c; i++)
    {
        printf("{");
        for (j = 0; j < m; j++)
        {

            if (((1 << j) & i) > 0)
            {
                printf("%d ", a[j]);
            }
        }
        printf("}");
        printf("\t");
    }
    return 0;
}