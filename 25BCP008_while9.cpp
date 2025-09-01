#include<stdio.h>
int main()
{
    int n, i=2, total=0;
    printf("Enter a value: ");
    scanf("%d", &n);
     while(i<=(n*2))
    {
        total+=i;
        i+=2;

    }
     printf("The sum of first %d even numbers is %d\n", n, total);


    return 0;
}
