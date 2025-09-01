#include<stdio.h>
int main()
{
    int n, i=0, total=0;
    printf("Enter a value: ");
    scanf("%d", &n);
     while(i<=n)
    {
        total+=i;
        i++;

    }
     printf("The sum of first %d numbers is %d\n", n, total);


    return 0;
}
