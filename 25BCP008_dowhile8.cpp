#include<stdio.h>
int main()
{
    int n, i=1, total=0;
    printf("Enter a value: ");
    scanf("%d", &n);
    do
    {
        total+=i;
        i+=2;
    }
    while(i<=(n*2));
    printf("The sum of first %d odd numbers is %d\n", n, total);
    return 0;
}
