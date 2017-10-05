
///SONNET

#include <bits/stdc++.h>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

template< class T > T _abs(T n) { return (n < 0 ? -n : n); }
template< class T > T _max(T a, T b) { return (!(a < b) ? a : b); }
template< class T > T _min(T a, T b) { return (a < b ? a : b); }
template< class T > T sq(T x) { return x * x; }
template< class T > T gcd(T a, T b) { return (b != 0 ? gcd<T>(b, a%b) : a); }
template< class T > T lcm(T a, T b) { return (a / gcd<T>(a, b) * b); }

#define REV(s, e) reverse(s, e)
#define SET(p) memset(p, -1, sizeof(p))
#define CLR(p) memset(p, 0, sizeof(p))
#define MEM(p, v) memset(p, v, sizeof(p))
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define PB(x) push_back(x)
#define pii pair< int, int >
#define psi pair< string, int >

const double EPS = 1e-9;
const double BIG = 1e19;
const int INF = 0x7f7f7f7f;

int isvowel(char ch)
{
    if( ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' )
        return 1 ;
    else
        return false ;
}

int main()
{
    char ch, last;
    while( scanf("%c",&ch) == 1 )
    {
        if(isalpha(ch))
        {
            if(isvowel(ch))
            {
                while(isalpha(ch))
                {
                    putchar(ch);
                    ch = getchar();
                }
                printf("ay");
            }
            else
            {
                last = ch ;
                ch = getchar();
                while(isalpha(ch))
                {
                    putchar(ch);
                    ch = getchar();
                }
                printf("%cay",last);
            }
        }
        putchar(ch);
    }
    return 0 ;
}
