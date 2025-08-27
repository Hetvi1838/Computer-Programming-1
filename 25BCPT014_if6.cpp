#include<stdio.h>
int main()
{
    float total, m1, m2, m3, avg;
    printf("Enter marks of 3 subjects:\n");
    scanf("%f %f %f", &m1, &m2, &m3);
    avg=(m1+m2+m3)/3;
    printf("The average of the marks is: %.2f\n", avg);
    if(avg>=70)
        printf("Passed with Distinction");
    else if(avg>=60)
        printf("Passed with First class");
    else if(avg>=50)
        printf("Passed with Second class");
    else if(avg>=35)
        printf("Passed with Third class");
    else
        printf("Failed");
    return 0;
}
