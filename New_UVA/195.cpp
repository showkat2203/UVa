#include <bits/stdc++.h>

using namespace std ;

int check(char c)
{
   if(isupper(c))
      return (c-'A') * 2 ;
   else
      return (c-'a') * 2 + 1 ;
}

bool cmp(const char &a,const char &b)
{
    //printf("%c %c\n", a, b) ;
    return check(a) < check(b);
}

int main()
{
    int i, l, tst ;
    char a[56]  ;
    scanf("%d", &tst) ;
    getchar() ;
    while(tst--)
    {
        gets(a) ;
        l = strlen(a) ;
        sort(a, a + l) ;
        do
        {
            printf("%s\n", a) ;
        }while(next_permutation(a, a + l, cmp))  ;
    }
    return 0 ;
}

