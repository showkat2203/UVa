#include<stdio.h>
#include<math.h>
#include<cstring>
#include<algorithm>

using namespace std;

int main()

{
    long long i,j,k,l,d,tst,m,y,d1,m1,y1,cnt=0;
    scanf("%lld\n",&tst);
    while(tst--)
    {
        scanf("%lld/%lld/%lld\n",&d,&m,&y);
        scanf("%lld/%lld/%lld",&d1,&m1,&y1);
        j = y-y1;
        if(m<m1)
        {
            j--;
        }
        else if(m==m1)
        {
            if(d<d1)
            {
                j--;
            }
        }
        if(j<0)
        {
            printf("Case #%lld: Invalid birth date\n",++cnt);
        }
        else if(j>130)
        {
            printf("Case #%lld: Check birth date\n",++cnt);
        }
        else
        {
            printf("Case #%lld: %lld\n",++cnt,j);
        }
    }
    return 0;
}
