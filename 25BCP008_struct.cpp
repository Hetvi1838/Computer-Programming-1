#include<stdio.h>
    typedef struct
    {
        int roll;
        char Sname[50];
        char Cname[50];
        char major[50];
        char minor[50];
    }student;
    student s[10];
int main()
{
    void accept();
    void printname();
    accept();
    printname();
}
void accept(void)
{
    for(int i=0;i<10;i++)
    {
        printf("Enter the data of the student %d:", i+1);
        printf("Roll no:");
        scanf("%d", &s[i].roll);
        fflush();
        printf("Name:");
        gets(s[i].Sname);
        fflush();
        printf("Course name:");
        gets(s[i].Cname);
        fflush();
        printf("Major:");
        gets(s[i].major);
        fflush();
        printf("Minor:");
        gets(s[i].minor);
        fflush();

    }
}
void printname(void)
{
    printf("The names of the students are:")
    for(int i=0;i<10;i++)
    {
        printf("%s", s[i].Sname);
    }
}
void Search(void)
{
    int roll, flag='n';
    printf("Enter Roll no. to Search: ");
    scanf("%d", &roll);
    for (int i=0; i<20; i++)
    {
        if (roll==s[i].roll)
        {
            flag='y';

        }
    }
}
