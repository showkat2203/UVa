#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char A[10000],B[10000];

using namespace std;

int main()
{

    int i,j,k,l,n,f;
    while(scanf("%d %s",&n,A)==2)
    {
        j=0;
        if(n==0&&A[0]=='0')
            break;
            //memset(B,'0',10000);
        for(i=0;i<10000;i++)
        {
            B[i]= 'NULL';
        }
        for(i=0;i<strlen(A);i++)
        {
            if((A[i]-'0')==n)
            {
                k =0;
            }
            else
            {
                B[j++]=A[i];
            }
        }
        int a = 0;
        f = 0;
        for(i=0;i<j;i++)
        {
            if(B[i]=='0')
            {
                a++;
            }
            else
            {
                f = 1;
                break;
            }
        }
        if(f==1)
        {
            for(i=a;i<j;i++)
            {
                printf("%c",B[i]);
            }
            printf("\n");
        }
        else
            printf("0\n");
    }
    return 0;
}
