#include<stdio.h>
int main()
{
    struct book
    {
        char title[20];
        char author[20];
        int edition;
        float price;
    }b1;
    printf("Write the title of the book: ");
    gets(b1.title);
    fflush(stdin);
    printf("Write the edition of the book: ");
    scanf("%d", &b1.edition);
    fflush(stdin);
    printf("Write the author of the book: ");
    gets(b1.author);
    fflush(stdin);
    printf("Write the price of the book: ");
    scanf("%f", &b1.price);
    fflush(stdin);
    printf("%s written by %s is the %d edition of price %f", b1.title, b1.author, b1.edition, b1.price);
}

