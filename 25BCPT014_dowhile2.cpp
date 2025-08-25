#include<stdio.h>
int main()
{
    int n, i=0;
    printf("Enter a value: ");
    scanf("%d", &n);
    do
    {
        i++;
        printf("%d\n", i);

    }
    while(i<n);
    return 0;
}
