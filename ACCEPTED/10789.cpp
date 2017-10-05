#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

#define max 2050

using namespace std;

bool prime[max];

void sieve();

int main()
{
    sieve();
    char A[max];
    int i,j,k,l,m,n,cnt=0,a[max];
    memset(a,0,max);
    scanf("%d\n",&j);
    while(j--)
    {
        scanf("%s",&A);
        memset(a,0,max);
        for(i=0;i<strlen(A);i++)
            a[A[i]]++;
        k=0;
        printf("Case %d: ",++cnt);
        for(i=48;i<123;i++)
        {
            if(prime[a[i]]==false)
            {
                k=1;
                printf("%c",i);
            }
        }
        if(k==0)
            printf("empty\n");
        else
            printf("\n");
    }
    return 0;
}
void sieve()
{
    for(int i=2;i<=sqrt(max);i++)
    {
        if(prime[i]==false)
        {
            for(int j=i+i;j<=max;j+=i)
            {
                prime[j]=true;
            }
        }
    }
    prime[0]=prime[1]=true;
}
