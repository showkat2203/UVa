#include<cstdio>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<algorithm>

using namespace std;

int main()
{
    long long i,j,k,l,h,w,area,a ;
    while(scanf("%lld",&j)==1 && j)
    {
        a = 0;
        while(j--)
        {
            scanf("%lld %lld %lld",&l,&w,&h);
            if( h > a)
            {
                a = h;
                area = l * w * h;
            }
            else if(a == h)
            {
                if(area < (l*w*h))
                    area = l * w * h;
            }
        }
        printf("%lld\n",area);
    }
    return 0;
}
