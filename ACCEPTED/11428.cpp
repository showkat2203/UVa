#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

using namespace std;

int main()
{
    long long n,x,y,i,j,k,l,a,b,f;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
        break;
        f=0;
        for(i=1;i<=n;i++)
        {
            for(j=0;j<=i;j++)
            {
                if(n==(i*i*i-j*j*j))
                {
                    k=i;
                    l=j;
                    f=1;
                    break;
                }
            }
            if(f==1)
                break;
        }
        if(f==1)
        {
            printf("%lld %lld\n",k,l);
        }
        else
            printf("No solution\n");
    }
    return 0;
}

