#include<stdio.h>
#include<string.h>
#include<algorithm>

using namespace std;

int main()
{
    char A[250],B[250],r[250];
    int c,i,j,num,n,l,k,tst;
    scanf("%d\n ",&tst);
    for(c=1;c<=tst;c++)
    {
        scanf("%s ",A);
        scanf("%s",B);
        l = strlen(A);
        k = strlen(B);
        if(l>=k)
        {
            i=k;
            while(i<l)
            {
                B[i]='0';
                i++;
            }
            B[i]='\0';
        }
        else if(l<=k)
        {
            i=l;
            while(i<k)
            {
                A[i]='0';
                i++;
            }
            A[i]='\0';
        }
        reverse(A,A+i);
        reverse(B,B+i);
        int sum=0;
        n=0;
        for(j=i-1;j>=0;j--)
        {
            sum=sum+(A[j]-'0')+(B[j]-'0');
            r[n]=sum%10;
            n++;
            sum=sum/10;
        }
        r[n]='\0';
            i=0;
        while(r[i]==0)
        {
            i++;
        }
        for(j=i;j<n;j++)
        {
            printf("%d",r[j]);
        }
        if(sum!=0)
            printf("1");
            printf("\n");
    }
    return 0;
}
