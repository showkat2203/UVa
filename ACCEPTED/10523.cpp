#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main()
{
    long long i,j,n,m,sum,d;
    while(scanf("%lld %lld",&n,&m)==2)
    {
        sum = 0;
        for(i=1;i<=n;i++)
        {
            sum+=i*pow(m,i);
        }
        printf("%lld\n",sum);
    }
    return 0;
}
