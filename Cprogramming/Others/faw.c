#include<stdio.h>
#include<string.h>
main()
{
	int num[]={1,2,3,4,5};
		int sum=0;
		for(int x : num)
			sum+=x;
        printf("%d",sum);
}
