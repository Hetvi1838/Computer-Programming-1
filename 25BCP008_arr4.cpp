#include<stdio.h>
int main()
{
    int arr[20];
    int j=0;
    printf("Enter 5 values:");
    for(j=0; j<5; j++)
    {
        scanf("%d", &arr[j]);
    }
     for(j=0; j<20; j++)
        {
            printf("Original array is:");
            printf("%d\n", arr[j]);
        }
    for(j=0;j<19;j++)
    {
        for(int i=j+1;i<20;i++)

            if(arr[i]<arr[j])
            {
                int t= arr[j];
                arr[j]=arr[i];
                arr[i]=t;
            }
    }
         printf("The values in ascending order are: ");
        for(j=0; j<20; j++)
        {
            printf("%d\n", arr[j]);
        }

    return 0;

}
