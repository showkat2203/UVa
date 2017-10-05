#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, k, l, m, n, tst, cnt ;
    char a[30] ;
    scanf("%d", &tst);
    for(i=1; i<=tst;  i++)
    {
        scanf("%s", a) ;
        l = strlen(a) ;
        //sort(a, a + l);
        do
        {
            printf("%s\n", a);
        }while( next_permutation(a, a + l)) ;
    }
    return 0;
}

