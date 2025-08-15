#include<stdio.h>
int main()
{
    float gs, net, dis;
    printf("Enter the gross sales:");
    scanf("%f", &gs);
    dis=gs/10;
    net=gs-dis;
    printf("The net sales are %f", net);
    return 0;
}
