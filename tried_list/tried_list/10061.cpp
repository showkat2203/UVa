#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N, B, i, j, P, Cnt, Base, k ;
    double res ;
    while ( scanf("%d %d",&N,&B) == 2 )
    {
          res = 0.0 ;
          Base = N ;
          j = B ;
          for ( i=2; i <= B; i++ )
          {
              if ( j % i == 0)
              {
                 P = 0 ;
                 while( j % i == 0)
                 {
                       P++;
                       j /= i;
                 }
                 Cnt = 0;
                 k=N;
                 while( k/i > 0)
                 {
                       Cnt += k/i ;
                       k /= i ;
                 }
                 Base = min (Base , Cnt / P ) ;
              }
          }
          for( i = 1; i<=N ; i++ )
              res += log(i) ;
          res /= log(B) ; res += 1.0 ;
          res = floor(res);
          printf( "%d %.0lf\n", Base, res ) ;
    }
    return 0 ;
}
