#include<stdio.h>
int main()
{
    int i=-1, n;
    printf("Give the value of n:\n");
    scanf("%d", &n);
    printf("The first n odd numbers are:\n");
    while(i<(n*2-1))
    {
        i+=2;
        printf("%d\n", i);

    }
    return 0;
}
