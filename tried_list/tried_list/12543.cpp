#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, k, l, m = -1 , n, cnt ;
    char a[150], b[105] ;
    while(scanf("%s", a) == 1)
    {
        if(strcmp(a, "E-N-D") == 0 )
            break ;
        l = strlen(a);
        cnt = 0 ;
        for(i=0; i<l; i++)
            if( isalpha(a[i]) || a[i] == '-')
                cnt++;
        if(cnt > m )
        {
            m = cnt ;
            strcpy(b, a);
        }
    }
    l = strlen(b);
    for(i=0; i<l; i++)
        if(b[i] >='A' && b[i] <= 'Z')
            b[i] = b[i] + 32 ;
    for(i=0; i<l; i++)
        if( ( b[i] >= 'a' && b[i] <='z') || b[i] == '-')
            printf("%c",b[i]);
    puts("") ;
    return 0 ;
}
