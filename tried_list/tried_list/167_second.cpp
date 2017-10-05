#include <bits/stdc++.h>

using namespace std ;

int chess[10][10], check[10], cnt = 0, sum, res ;

bool place(int k, int i)
{
    for( int j = 0; j < k ; j++ )
        if( check[j] == i || abs(k - j) == abs(check[j] - i))
            return false ;
    return true ;
}

void eight_queen(int k, int n)
{
    for( int i = 0; i < n; i++ )
    {
        if( place(k, i) )
        {
            check[k] = i ;
            if( k == n - 1 )
            {
                sum = 0 ;
//                ++cnt ;
                for( int i = 0; i < n ; i++ )
                    sum += chess[i][check[i]];
                res = max(res, sum) ;
            }
            else
                eight_queen(k + 1, n) ;
        }
    }
}

int main()
{
    int i, j, k, l, tst ;
    scanf("%d", &tst) ;
    while(tst--)
    {
        for( i = 0; i < 8; i++ )
            for( j = 0; j < 8; j++ )
                scanf("%d", &chess[i][j]) ;
        res = 0 ,sum = 0 ,cnt = 0 ;
        eight_queen(0, 8) ;
        printf("%5d\n", res) ;
//        printf("%d\n", cnt) ;
    }
    return 0 ;
}

