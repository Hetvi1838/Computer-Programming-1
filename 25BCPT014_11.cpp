#include<stdio.h>
int main()
{
    float a, KB, MB, GB;
    printf("Enter the bytes to be converted to KB, MB, GB:");
    scanf("%f", &a);
    KB=a/1000;
    MB=a/1000000;
    GB=a/1000000000;
    printf("%f in KB= %f\n", a, KB);
    printf("%f in MB= %f\n", a, MB);
    printf("%f in GB= %f\n", a, GB);
    return 0;
}
