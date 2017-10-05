#include<stdio.h>



int main()
{
    int r,n,a,b,cnt=0;
    while(scanf("%d %d ",&r,&n)==2)
    {
        if(n==0&&r==0)
            break;
        if(n>26)
        {
            printf("Case %d: impossible\n",++cnt);
        }
        else
        {
            a=(r-1)/n;
            printf("Case %d: %d\n",++cnt,a);
        }
    }
    return 0;
}

