#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define max 20000011

bool seive[max];

void sieve();
int A[110000];
using namespace std;

int main()
{
    sieve();
    int n,o;
    while(scanf("%d",&n)==1)
    {
        printf("(%d, %d)\n",A[n],A[n]+2);
    }
    return 0;
}
void sieve()
{
    int i,k=1,l,m;
    for(i=2;i<=sqrt(max);i++)
    {
        if(seive[i]==false)
        {
            for(int j=i+i;j<=max;j=j+i)
            {
                seive[j]=true;
            }
        }
    }
    for(i=3;i<=max;i++)
    {
        if(seive[i]==false&&seive[i+2]==false)
            A[k++]=i;
    }
    //printf("%d\n",k);
    /*for(int i=2;i<=max;i++)
        printf("%d - > %d\n",i,seive[i]);*/
}
