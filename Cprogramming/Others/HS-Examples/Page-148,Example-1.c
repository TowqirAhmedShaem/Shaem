#include<string.h>
#include<stdio.h>
int main()
{
    char a1[80],a2[80];
    int i;
    printf("Enter the first string :\n");
    gets(a1);
    printf("Enter the second string :\n");
    gets(a2);

    // See how long the string are
    printf("%s is %d chars long\n",a1,strlen(a1));
    printf("%s is %d chars long\n",a2,strlen(a2));

    //Compare the string
    i=strcmp(a1,a2);
    if(!i)
        printf("The strings are equal.\n");
    else if(i<0)
        printf("%s is less then %s\n",a1,a2);
    else
        printf("%s is greater then %s\n",a1,a2);

    //concatenate a2 to end of a1 if there is enough room.
    if(strlen(a1)+strlen(a2)<80)
    {
        strcat(a1,a2);
        printf("%s\n",a1);
    }

    //Copy a2 to a1
    strcpy(a1,a2);
    printf("%s %s\n",a1,a2);
    return 0;
}
