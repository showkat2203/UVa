#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin) ;
    int i, k, l, m, tst ;
    char a[30] ;
    scanf("%d", &tst);
    getchar() ;
    for(i=1; i<=tst;  i++)
    {
        gets(a) ;
        l = strlen(a) ;
        sort(a, a + l);
        do
        {
            printf("%s\n", a);
        }while( next_permutation(a, a + l)) ;
        printf("\n") ;
    }
    return 0;
}

