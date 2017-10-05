#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define max 100000

using namespace std;

bool sieve[max];

void seev();

int main()
{
    seev();
    int i,j,k,n;
    scanf("%d",&k);
    while(k--)
    {
        scanf("%d",&n);
        n = n/2;
        n++;
        while(sieve[n]!=false)
            n++;
        printf("%d\n",n);
    }
    return 0;
}


void seev()
{
    for(int i=2;i<=sqrt(max);i++)
    {
        if(sieve[i]==false)
        {
            for(int j=i+i;j<=max;j+=i)
            {
                sieve[j]=true;
            }
        }
    }
}
