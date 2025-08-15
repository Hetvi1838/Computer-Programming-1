#include<stdio.h>
int main()
{
    float F, C;
    printf("Enter temperature in fahrenheit:");
    scanf("%f", &F);
    C=((5.0/9.0)*(F-32));
    printf("%f fahrenheit in celcius is %f\n", F, C);
    return 0;
}
