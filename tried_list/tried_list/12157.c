#include<stdio.h>


int main()
{
    //freopen("12157.txt","r",stdin);
    int A[1000], i, j, k, l, n, m, tst , tot , sum , cnt , cas = 0;
    scanf("%d",&tst);
    while(tst--)
    {
        scanf("%d",&n);
        for(i=0; i<n; i++)
            scanf("%d",&A[i]);
        tot = 0; sum = 0 ; cnt = 0;
        int sum2 = 0;
        for( i=0; i<n; i++)
        {
            sum+=(A[i]/30 + 1);
            sum2+=(A[i]/60 + 1);
        }
        sum*=10;
        sum2*=15;
        if(sum < sum2)
            printf("Case %d: Mile %d\n",++cas,sum);
        else if(sum2 < sum)
            printf("Case %d: Juice %d\n",++cas,sum2);
        else
            printf("Case %d: Mile Juice %d\n",++cas,sum);
    }
    return 0;
}
