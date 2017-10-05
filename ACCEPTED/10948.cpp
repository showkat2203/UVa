#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define Max 1000000
bool seive[Max];

void is_prime();
long long prime[1000000];
long long a,b,c,d,i,j;
int main()
{
    is_prime();
    long long n,num;
    bool f;
    while(scanf("%lld",&num)==1&&num)
    {
        f=false;
        printf("%lld:\n",num);
        for(i=0;i<sqrt(num);i++)
        {
            n=num-prime[i];
            if(seive[n]==false)
            {
                printf("%lld+%lld\n",prime[i],n);
                f=true;
                break;
            }
        }
        if(f==false)
        {
            printf("NO WAY!\n");
        }
    }
}
void is_prime()
{
    int k=0,g;
    for(i=2;i<sqrt(Max);i++)
    {
        if(i==2||seive[i] == false)
        {
            for(j=i+i;j<Max;j=j+i)
            {
                seive[j]=true;
            }
        }
    }
    for(i=2;i<Max;i++)
    {
        if(seive[i]==false)
        {
            prime[k++]=i;
        }
    }
    /*for(g=0;g<k;g++)
    {
        printf("%lld\n",prime[g]);
    }*/
}

