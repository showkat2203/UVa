#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("11559.txt","r",stdin);
    int N, B, H, W, pr, seat[1010] , i , j, tst;
    while(scanf("%d %d %d %d",&N, &B, &H, &W) == 4)
    {
        int res, maxi_amou = 1000000 ;
        tst = H;
        while(H--)
        {
            scanf("%d",&pr);
            for(i=0; i<W; i++)
                scanf("%d",&seat[i]);
            for(i=0; i<W; i++)
            {
                if(seat[i] >= N)
                {
                    res = pr * N;
                    if( res < maxi_amou)
                        maxi_amou = res ;
                }
            }
        }
        if(maxi_amou <= B)
            printf("%d\n",maxi_amou);
        else
            printf("stay home\n");
    }
    return 0;
}
