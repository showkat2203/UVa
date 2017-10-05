#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>

using namespace std;

int main()
{
    long long tst, i,j,k,l,n,m,sum;
    scanf("%lld",&tst);
    while(tst--)
    {
        scanf("%lld",&n);
        int f = 0;
        for(i=n - 100;i<=n;i++)
        {
            m = i;
            sum = 0;
            while(m!=0)
            {
                l = m % 10;
                sum = sum + l;
                m = m / 10;
            }
            if(sum + i == n)
            {
                printf("%lld\n",i );
                f = 1;
                break;
            }
        }
        if(f == 0)
            printf("0\n");
    }
    return 0;
}
