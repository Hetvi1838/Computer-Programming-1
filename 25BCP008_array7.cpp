#include<stdio.h>
int main()
{
    int arr[9] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int num[9]={0};
    int i, amt, total=0;
    printf("Enter the amount:");
    scanf("%d", &amt);
    for(i=0;i<9;i++)
    {
        if(amt>=arr[i])
        {
            num[i]=amt/arr[i];
            amt=amt%arr[i];
            total+=num[i];
        }
    }
    printf("The number of notes required:\n");
    for(i=0;i<9;i++)
    {
        if(num[i] !=0)
            printf("%d * %d\n", arr[i], num[i]);
    }
    return 0;
}
