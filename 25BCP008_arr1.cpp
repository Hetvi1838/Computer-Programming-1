#include<stdio.h>
int main()
{
    int arr[5];
    int i=0;
    printf("Enter 5 values:");
    for(i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The values are: ");
    for(i=0; i<5; i++)
    {

        printf("%d\n", arr[i]);
    }
    return 0;
}
