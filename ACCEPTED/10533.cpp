#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define max 10000015

using namespace std;

bool prime[max];

int digit[max];

void sieve();
int add(int );
int main()
{
    sieve();
    int i,j,k,n,m;
    scanf("%d",&j);
    while(j--)
    {
        scanf("%d %d",&n,&m);
        k = digit[m] - digit[n-1];
        printf("%d\n",k);
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
    for(int i=1;i<=max;i++)
    {
        if(prime[i]==false&&prime[add(i)]==false)
            digit[i]=1;
    }

    digit[0]=0;
    for(int i=1;i<=max;i++)
        digit[i]+=digit[i-1];
}

int add(int n)
{
    int sum=0;
    while(n!=0)
    {
        sum = sum  + (n%10) ;
        n = n/10;
    }
    return sum;
 }

