#include<stdio.h>
int main()
{
    int arr[10];
    int i=0;
    printf("Enter 10 values:");
    for(i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The 4th, 7th, 9th values are: %d %d %d", arr[3], arr[6], arr[8]);
    return 0;
}
