#include<stdio.h>
int main()
{
    float I, P, R, T;
    printf("Enter the principal, rate of interest (%%) per annum and time(in years) respectively:");
    scanf("%f %f %f", &P, &R, &T);
    I=(P*R*T)/100;
    printf("Simple interest is: %f\n", I);
    return 0;
}
