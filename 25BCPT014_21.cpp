#include<stdio.h>
int main()
{
    float gs, a, d, net;
    printf("Enter your gross salary:");
    scanf("%f", &gs);
    a=gs*0.1;
    d=gs*0.03;
    net=gs+a-d;
    printf("The net salary is %f ", net);
    return 0;
}
