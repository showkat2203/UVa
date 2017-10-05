#include<stdio.h>
#include<string.h>
int main()
{
    int i,s,r,l;
    char A[1000];
    while(scanf("%s",A) == 1){
        r=0;
        int j=0;
        l=strlen(A);
        if(l==1 && A[0]=='0'){
            break;
        }
        printf("%s ",A);
        s = 0;
        for(i=0;i<l;i++)
        {
            s = s+(A[i]-'0');
        }
        if(s % 9 == 0)
        {
            r = 1;
            s = s / 9 ;
        }

        if(r==1)
        {
            printf(" is a multiple of 9 and is a degree of %d\n",s);
        }
        else
        {
            printf(" is not a multiple of 9.\n");
        }
    }
    return 0;
}

