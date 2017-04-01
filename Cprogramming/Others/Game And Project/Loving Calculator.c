#include<stdio.h>
#include<string.h>
int main()
{
    char a[26],b[26];
    int i,ln1,ln2,x,y,s,t;
    float ans;
    first:
        printf("Give your name : \a\n");
    while(scanf("%s",a)==1){
            printf("\nGive another name :\a\n");
    	scanf("%s", b);
        ln1=strlen(a); ln2=strlen(b);
        x=0;
        for(i=0;i<ln1;i++){
        	if(a[i]>='a' && a[i]<='z')
            x+=a[i]-96;
            else if(a[i]>='A' && a[i]<='Z')
            x+=a[i]-64;
        }
        s=0;
        while(x!=0){
        	s+=x%10; x/=10;
        	}
        	if(s>9){
        		x=s; s=0;
                while(x!=0){
                	s+=x%10; x/=10;
                	}
        	}
        	y=0;
        for(i=0;i<ln2;i++){
        	if(b[i]>='a' && b[i]<='z')
            y+=b[i]-96;
            else if(b[i]>='A' && b[i]<='Z')
            y+=b[i]-64;
        }
        t=0;
        while(y!=0){
        	t+=y%10; y/=10;
        	}
            if(t>9){
            	y=t; t=0;
                while(y!=0){
                	t+=y%10; y/=10;
                	}
            }
            if(s>t)
            ans=(float)t*100/(float)s;
            else
            ans=(float)s*100/(float)t;
            printf("\n%s loves %s %0.2f%%\n\n",a,b,ans);
    goto first;
    }
    return 0;
}
