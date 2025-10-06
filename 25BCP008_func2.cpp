#include<stdio.h>
int main()
{
    int a, b;
    void swap(int, int);
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);

    swap(a,b);
}

    void swap(int x, int y)
    {
        int z;
        z=x;
        x=y;
        y=z;
            printf("swapped values are %d %d", x, y);
    }
