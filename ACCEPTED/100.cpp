#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
    long long a,b,i,j,k,l,m;
    while(scanf("%lld %lld",&a,&b)==2)
    {
        long long cnt=0;
        m=0;
        printf("%lld %lld ",a,b);
        if(a>b)
        {
            k=a;
            a=b;
            b=k;
        }
        for(i=a;i<=b;i++)
        {
            cnt=1;
            j=i;
            while(j>1){
                if(j%2!=0)
                {
                    j = (3 * j) + 1;
                }
                else
                {
                    j = j / 2;
                }
                    cnt++;
            }
            if(cnt>m)
            {
                m = cnt;
            }
        }
        printf("%lld\n",m);
    }
    return 0;
}
