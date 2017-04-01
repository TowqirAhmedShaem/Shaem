#include<stdio.h>
int main()
{
    int choice;
    printf("Mailing list Menu :\a\n\n");
    printf(" 1. Enter address.\n");
    printf(" 2. Delete Address.\n");
    printf(" 3. Search the list.\n");
    printf(" 4. print the list.\n");
    printf(" 5. Quit\n");
    do
    {
        printf("Enter the number :\a\n");
        scanf("%d",&choice);
    }while(choice<1 || choice>5);
    return 0;
}
