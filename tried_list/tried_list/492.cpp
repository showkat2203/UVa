#include<stdio.h>
#include<ctype.h>
#include<string.h>

using namespace std;


int vow(char ch)
{
    if( ch == 'A' || ch == 'E' || ch=='I' || ch=='O' || ch=='U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' )
        return 0;
    else
        return 1;
}

int main()
{
    char a[10001], b[1010], c[1010] *p ;
    int i, j, k, l, m, n ;
    while( gets(a) == 1)
    {
        p = strtok(a, " ") ;
        while( p != NULL )
        {
            i = 0 ;
            strcpy(c, p) ;
            p = strtok(NULL, " ") ;
        }
    }
    return 0 ;
}
