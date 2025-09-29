#include<stdio.h>
int main()
{
    int a[5], *p, i;
    p=a;
    printf("Enter 5 different values:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d", p);
        p++;

    }
    printf("Printing all values using pointer p.\n");
    p=a;
    for(i=0;i<5;i++)
    {
        printf("%d ", *p);
        p++;
    }
    return 0;
}
