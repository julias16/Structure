#include<stdio.h>
struct book
{
    int num;
    char writer[30];
    float price;
};
int main()
{
    int n, i;
    printf("How many book?\n");
    scanf("%d", &n);
    struct book book[n];
    for(i=0; i<n; i++)
    {
        printf("Enter the information of book %d\n", i+1);
        printf("Enter book number: ");
        scanf("%d", &book[i].num);
        printf("Enter the writer name: ");
        fflush(stdin);
        gets(book[i].writer);
        printf("Enter the book price: ");
        scanf("%f", &book[i].price);
    }
    for(i=0; i<n; i++)
    {
        printf("\n\nInformation for book %d\n", i+1);
        printf("Book number: %d\n", book[i].num);
        printf("The writer name: %s\n", book[i].writer);
        printf("The book price: %.2f\n", book[i].price);
    }
    return 0;
}
