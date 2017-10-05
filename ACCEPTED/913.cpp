#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
    long long a,n,i,j;
    while(scanf("%lld",&n)==1)
    {
        a=(n*(n+2)/2)*3-6;
        printf("%lld\n",a);
    }
    return 0;
}
