#include<cstdio>
#include<cmath>
#include<cstdlib>

using namespace std;

int main()
{
    int a[10010], b[10010], c[10010], sum1, tst, i, j, k;
    while(scanf("%d",&tst) == 1 && tst)
    {
        while(tst--)
        {
            scanf("%d",&j);
            sum1 = 0;
            for(i=0; i<j; i++)
            {
                scanf("%d %d %d",&a[i], &b[i], &c[i]);
                sum1+=a[i] * c[i];
            }
            printf("%d\n",sum1 );
        }
    }
    return 0;
}
