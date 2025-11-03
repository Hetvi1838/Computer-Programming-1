#include<stdio.h>
int nat(int n)
{
    if (n==1)
    {
        printf("2");
        return 2;}

    nat(n-1);
    printf("%d ", n*2);
    return n;

}
int main()
{
    int n;
    printf("Value of n= ");
    scanf("%d", &n);
    printf("The first %d natural even numbers are: ", n);
    nat(n);
    return 0;
}
