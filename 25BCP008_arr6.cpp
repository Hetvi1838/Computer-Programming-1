#include<stdio.h>
int main()
{
    int a[2][2], b[2][2], c[2][2], i, j;
    printf("Enter values of first array:");
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        {
        scanf("%d", &a[i][j]);
        }
    printf("Enter values of second array:");
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        {
            scanf("%d", &b[i][j]);
            c[i][j]=a[i][j]*b[i][j];
        }
    printf("The first array:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ", a[i][j]);
        }
        printf(" \n");
    }
    printf("The second array:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ", b[i][j]);
        }
        printf(" \n");
    }
    printf("The third array:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ", c[i][j]);
        }
            printf(" \n");
    }
}
