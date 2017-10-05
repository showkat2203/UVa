#include <bits/stdc++.h>

using namespace std;

int main()
{
    char A[10][10] ;
    int dir[] =  {-1, 0,   1, -1, 1, -1, 0, 1};
    int dir2[] = {-1, -1, -1,  0, 0,  1, 1, 1};
    int cnt, k1, k2, K1, K2, r1, r2, b1, b2, n1, n2,   ;
    while( 1 )
    {
        cnt = 0;
        for(i=0; i<8; i++)
        {
            for(j=0; j<8; j++)
            {
                scanf(" %c", &a[i][j] );
                if( a[i][j] == '.')
                    cnt++;
                else if( a[i][j] == 'k')
                {
                    k1 = i ;
                    k2 = j ;
                }
                else if(a[i][j] == 'r')
                {
                    r1 = i ;
                    r2 = j ;
                }
                else if( a[i][j] == 'b' )
                {
                    b1 = i;
                    b2 = j;
                }
                else if(a[i][j] == 'q')
                {
                    q1 = i ;
                    q2 = j;
                }
                else if( a[i][j] == 'n')
                {
                    n1 = i;
                    n2 = j;
                }
                else if( a[i][j] == 'K')
                {
                    K1 = i ;
                    K2 = j ;
                }
                else if(a[i][j] == 'R')
                {
                    R1 = i ;
                    R2 = j ;
                }
                else if( a[i][j] == 'B' )
                {
                    B1 = i;
                    B2 = j;
                }
                else if(a[i][j] == 'Q')
                {
                    q1 = i ;
                    q2 = j;
                }
                else if( a[i][j] == 'N')
                {
                    n1 = i;
                    n2 = j;
                }
            }
        }
    }
    return 0;
}
