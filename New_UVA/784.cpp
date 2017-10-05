#include <bits/stdc++.h>


using namespace std;


//int rr[]= {-1,-1,0,0,1,1};
//int cc[]= {-1,0,-1,1,0,1};
int rr[]= {0,0,1,-1};/*4 side move*/
int cc[]= {-1,1,0,0};/*4 side move*/
//int rr[]= {1,1,0,-1,-1,-1,0,1};/*8 side move*/
//int cc[]= {0,1,1,1,0,-1,-1,-1};/*8 side move*/
//int rr[]={1,1,2,2,-1,-1,-2,-2};/*night move*/
//int cc[]={2,-2,1,-1,2,-2,1,-1};/*night move*/

//template< class T > T _abs(T n) { return (n < 0 ? -n : n); }
//template< class T > T _max(T a, T b) { return (!(a < b) ? a : b); }
//template< class T > T _min(T a, T b) { return (a < b ? a : b); }
//template< class T > T sq(T x) { return x * x; }
//template< class T > T gcd(T a, T b) { return (b != 0 ? gcd<T>(b, a%b) : a); }
//template< class T > T lcm(T a, T b) { return (a / gcd<T>(a, b) * b); }
//template < class T > T power(T N , T P) { return (P == 0) ?  1 : N * power(N , P - 1); }
//
//#define Maxi 100000005
//#define sq sqrt(Maxi)
//
//
//typedef long long ll ;
//
//bool yes_no[Maxi] ;
//int prime[6 * 1000000], sz = 0 ;
//
//void seive()
//{
//    int i, j ;
//    yes_no[0] = yes_no[1] = true ;
//    yes_no[2] = false ;
//    prime[sz++] = 2 ;
//    for( i = 4; i <= Maxi; i+= 2)
//        yes_no[i] = true ;
//    for( i = 3; i <= sq; i += 2 )
//        if( yes_no[i] == false )
//            for( j = i * i ; j <= Maxi; j += ( 2 * i ) )
//                yes_no[j] = true ;
//
//    for( i = 3; i <= Maxi; i += 2 )
//        if( yes_no[i] == false )
//       // cout << sz << endl;
//            prime[sz++] = i ;
////    for( i = 0; i < 20; i++ )
////        printf("%d\n", prime[i]) ;
//}

char a[35][90], in[90] ;

int board[35][90], n, m, vis[35][90] ;


void bfs(int r, int c)
{
    queue < int > q ;
    memset(vis, 0, sizeof vis) ;
    q.push(r), q.push(c) ;
    vis[r][c] = 1 ;
    a[r][c] ='#' ;
    int i, j, k, l, b, d ;
    while( !q.empty() )
    {
        k = q.front(), q.pop(), l = q.front(), q.pop() ;
        for( i = 0; i < 4; i++ )
        {
            b = k + rr[i], d = l + cc[i] ;
            if( b >= 0 && b < n && d >= 0 &&  d < m )
            {
                if( vis[b][d] == 0 && ( a[b][d] == ' '))
                {
                    vis[b][d] = 1 ;
                    a[b][d] = '#' ;
                    q.push(b), q.push(d) ;
                }
            }
        }
    }
}

int main()
{
//    freopen("in.txt", "r", stdin) ;
    int tst, i, j, k, l ;
    scanf("%d", &tst) ;
    getchar() ;
    while(tst--)
    {
        //memset(a, '.',   sizeof a ) ;
        n = 0, m = 0, l = 0 ;
        while( gets(in) && in[0] != '_' )
        {
            l = strlen(in) ;
            m = max(m, l ) ;
            strcpy(a[n++], in) ;
        }
        for( i = 0; i < n; i++ )
        {
            for( j = 0; j < m; j++ )
            {
                if( a[i][j] == '*' )
                {
                    l = 1 ;
                    bfs(i, j) ;
                    break ;
                }
            }
            if( l == 1 )
                break ;
        }
        for( i = 0; i < n; i++ )
        {
            puts(a[i]) ;
        }
        puts(in) ;
//        puts("") ;
    }
    return 0 ;
}


