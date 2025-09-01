#include<stdio.h>
#include<conio.h>

int main()
{

    int a, b;
    char ch;
    do
    {
        printf("\nEnter two numbers:");
        scanf("%d %d", &a, &b);
        printf("%d + %d = %d\n", a, b, a+b);
        printf("Press y to continue.");
        ch= getche();
    }
    while(ch=='y' || ch=='Y');
    return 0;
}
