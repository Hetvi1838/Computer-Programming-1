#include<stdio.h>
int main()
{
    float gs, dis, net;

    printf("Enter yout gross sales:\n");
    scanf("%f", &gs);
    if (gs>20000)
    {
        dis=15;
        net=gs-(dis/100.0*gs);
        printf("Net sales are %.2f", net);
    }
    else if(gs>10000)
    {
        dis=10;
        net=gs-(dis/100.0*gs);
        printf("Net sales are %.2f", net);
    }
    else
    {
        dis=5;
        net=gs-(dis/100.0*gs);
        printf("Net sales are %.2f", net);
    }
    return 0;
}
