#include<stdio.h>
int main()
{
    int arr[5];
    int j=0;
    printf("Enter 5 values:");
    for(j=0; j<5; j++)
    {
        scanf("%d", &arr[j]);
    }
    for(j=0;j<4;j++)
    {
        for(int i=j+1;i<5;i++)

            if(arr[i]<arr[j])
            {
                int t= arr[j];
                arr[j]=arr[i];
                arr[i]=t;
            }
    }
         printf("The values in ascending order are: ");
        for(j=0; j<5; j++)
        {
            printf("%d\n", arr[j]);
        }

    return 0;

}
