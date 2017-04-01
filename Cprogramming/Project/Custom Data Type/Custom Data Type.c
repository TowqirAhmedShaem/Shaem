#include<stdio.h>
//code is  made by Towqir ahmed Shaem.
//This code is about the study of Custom data type.
struct student
{
    char name[80];
    int id;
}st;

int main()
{
    printf("Please give your information\n");

    printf("Your Name:\n");
    scanf("%[^\n]",&st.name);

    printf("Your ID:\n");
    scanf("%d",&st.id);


    printf("Your Name:%s\n",st.name);
    printf("Your ID: %d\n",st.id);

    return 0;
}
