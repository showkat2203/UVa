#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main()
{
    int h, m, H, M, i, j, k;
    while(scanf("%d %d %d %d",&h,&m,&H,&M)== 4 )
    {
        if( h == 0 && m == 0  && H == 0 && M == 0)
            break;
        k = (H - h);
        j = ( M - m );
        if(j < 0)
        {
            j = j + 60;
            k -= 1;
        }
        if(k < 0)
        {
            k += 24;
        }
        k = k * 60 +  j;
        printf("%d\n",k);
    }
    return 0;
}
