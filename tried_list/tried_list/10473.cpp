#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("10473.txt","r", stdin ) ;
    int i, j, k, l, n ;
    char a[1010], b[1010] ;
    while( scanf("%s", a) == 1 )
    {
        if( a[0] == '-')
            break ;
        if(a[0] == '0' && a[1] == 'x')
        {
            j = 0 ;
            l = strlen(a) ;
            for(i = 2; i<l; i++)
            {
                b[j++] = a[i] ;
            }
            b[j] = NULL ;
            sscanf(b, "%X", &n) ;
            printf("%d\n", n);
        }
        else
        {
            sscanf(a, "%d", &n) ;
            printf("0x%X\n", n);
        }
    }
    return 0 ;
}

