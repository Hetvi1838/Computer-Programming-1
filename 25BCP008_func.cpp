#include<stdio.h>
int main()
{
    int a, b;
    void add(int, int);
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);

    add(a,b);
}

    void add(int x, int y)
    {
            printf("answer= %d", x+y);
    }
