#include<stdio.h>
int main()
{
    int n, i=0, total=0;
    printf("Enter a value: ");
    scanf("%d", &n);
    do
    {
        total+=i;
        i++;
    }
    while(i<=n);
    printf("The sum of n numbers is %d\n", total);
    return 0;
}
