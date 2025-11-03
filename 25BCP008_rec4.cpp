#include<stdio.h>
int nat(int n)
{
    if (n==0)
    {
        printf("0");
        return 0;}

    return n+nat(n-1);

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
