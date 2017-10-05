#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    long long i,j,a,cnt=0,m,n,sum;
    scanf("%lld",&j);
    while(j--)
    {
        scanf("%lld",&a);
        n = a;
        while(n>9)
        {
            sum=0;
            while(n!=0)
            {
                m = n%10;
                n/=10;
                sum = sum + m * m;
                if(n==0)
                {
                    n = sum;
                    break;
                }
            }
        }
        if(n==1||n==7)
            printf("Case #%lld: %lld is a Happy number.\n",++cnt,a);
        else
            printf("Case #%lld: %lld is an Unhappy number.\n",++cnt,a);
    }
    return 0;
}
