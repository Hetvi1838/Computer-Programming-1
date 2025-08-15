#include<stdio.h>
int main()
{
    int m1, m2, m3, total, avg;
    printf("Give marks of 3 subjects:");
    scanf("%d %d %d", &m1, &m2, &m3);
    avg=(m1+m2+m3)/3;
    total=m1+m2+m3;
    printf("Two average and the total of the marks is: %d\n %d", avg, total);
    return 0;
}
