#include<stdio.h>
int main()
{
    int n, i=-1;
    printf("Enter a value: ");
    scanf("%d", &n);
    do
    {
        i+=2;
        printf("%d\n", i);

    }
    while(i<(n*2-1));
    return 0;
}
