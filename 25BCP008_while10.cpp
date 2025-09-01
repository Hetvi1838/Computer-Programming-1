#include<stdio.h>
int main()
{
    int n, i=1, total=1;
    printf("Enter a value: ");
    scanf("%d", &n);
    while(i<=n)
    {
        total*=i;
        i++;
    }

    printf("The factorial of first %d numbers is %d\n", n, total);
    return 0;
}
