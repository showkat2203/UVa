#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
    long long a,b,i,j,k,l,m,f,test_case=0,cnt;
    while(scanf("%lld %lld",&a,&b)==2&&a>0&&b>0)
    {
        if(a>b)
        {
            k=a;
            a=b;
            b=k;
        }
        cnt=0;
        k=a;
        l=b;
        while(a<=b){
            if(a==1)
            {
                cnt++;
                break;
            }
            else if(a%2!=0)
            {
                a = (3 * a) + 1;
                cnt++;
            }
            else
            {
                a = a / 2;
                cnt++;
            }
        }
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",++test_case,k,l,cnt);
    }
    return 0;
}
