#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0;
    char s1[50];
    char s2[50];
    printf("Enter a string:");
    gets(s1);
    while(s1[i]!=0)
    {

            s2[i]=s1[i];
            i++;

    }
    s2[i]='\0';
    printf("The string in s2 is %s", s2);
}
