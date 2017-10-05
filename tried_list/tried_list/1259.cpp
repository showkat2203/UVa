#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define Max 10000010
bool seive[Max];

void is_prime();

long long i,j;
long long num,n=1;
int tst;
int main()
{
    is_prime();
    scanf("%d",&tst);
    while(tst--)
    {
        scanf("%lld",&num);
        long long  cnt = 0;
        for(i=2;i<(num);i++)
        {
            if(seive[i]==false && seive[num-i]==false)
            {
                cnt++;
            }
        }
        printf("Case %lld: %lld\n",n++,(cnt)/2);
    }
    return 0;
}
void is_prime()
{
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
}

