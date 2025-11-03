#include<stdio.h>
int nat(int n)
{
    if (n==1)
    {
        printf("1");
        return 1;}
    nat(n-1);
    printf("%d", n*2-1);
    return n;

}
int main()
{
    int n;
    printf("Value of n= ");
    scanf("%d", &n);
    printf("The first %d natural odd numbers are: ", n);
    nat(n);
    return 0;
}
