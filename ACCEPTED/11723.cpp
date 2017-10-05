#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
    long long r,n,a,b,cnt=0;
    while(scanf("%lld %lld",&r,&n)==2&&n&&r)
    {
        a=(r-1)/n;
        if(a>26)
        {
            printf("Case %lld: impossible\n",++cnt);
        }
        else
        {
            printf("Case %lld: %lld\n",++cnt,a);
        }
    }
    return 0;
}
