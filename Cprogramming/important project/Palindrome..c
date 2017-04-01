#include <stdio.h>
int main()
{
    int i, j, palindrome;
    for(i = 1; i <= 1000; i++)
    {
        palindrome = reverse(i);
        if(i == palindrome)
            printf("%d ",palindrome);
    }
}
int reverse(int x)
{
    int mod, number = 0;
    while(x > 0) {
        mod = x%10;
        number = number*10 + mod;
        x /= 10;
    }
    return number;
}
