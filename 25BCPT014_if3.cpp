#include<stdio.h>
int main()
{
    float gs, a, d, net;

    printf("Enter yout gross salary:\n");
    scanf("%f", &gs);
    if (gs>10000)
    {
        a=10;
        d=3;
        net=gs+(a/100.0*gs)-(d/100.0*gs);
        printf("Net salary is %.2f", net);
    }
    else if(gs>5000)
    {
        a=7;
        d=2;
        net=gs+(a/100.0*gs)-(d/100.0*gs);
        printf("Net salary is %.2f", net);
    }
    return 0;
}
