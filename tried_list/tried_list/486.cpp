#include <bits/stdc++.h>

using namespace std;

int main()
{
    char a[1010], *p, b[101] ;
    int i, j, k, num, l, m, f  ;
    while(gets(a))
    {
        f = 0 , num = 0;
        p = strtok(a, " ") ;
        while( p != NULL )
        {
            strcpy(b, p) ;
            if(strcmp(b, "negative") == 0)
                f = 1 ;
            if( strcmp(b, "zero") == 0 )
                num = num * 10 + 0 ;
            else if( strcmp(b, "one") == 0 )
                num = num * 10 + 1 ;
            else if( strcmp(b, "two") == 0 )
                num = num * 10 + 2 ;
            else if( strcmp(b, "three") == 0 )
                num = num * 10 + 3 ;
            else if( strcmp(b, "four") == 0 )
                num = num * 10 + 4 ;
            else if( strcmp(b, "five") == 0 )
                num = num * 10 + 5 ;
            else if( strcmp(b, "six") == 0 )
                num = num * 10 + 6 ;
            else if( strcmp(b, "seven") == 0 )
                num = num * 10 + 7 ;
            else if( strcmp(b, "eight") == 0 )
                num = num * 10 + 8 ;
            else if( strcmp(b, "nine") == 0 )
                num = num * 10 + 9 ;
            else if( strcmp(b, "ten") == 0 )
                num = num * 10 + 10 ;
            else if( strcmp(b, "eleven") == 0 )
                num = num * 10 + 11 ;
            else if( strcmp(b, "twelve") == 0 )
                num = num * 10 + 12 ;
            else if( strcmp(b, "thirteen") == 0 )
                num = num * 10 + 13 ;
            else if( strcmp(b, "fourteen") == 0 )
                num = num * 10 + 14 ;
            else if( strcmp(b, "fifteen") == 0 )
                num = num * 10 + 15 ;
            else if( strcmp(b, "sixteen") == 0 )
                num = num * 10 + 16 ;
            else if( strcmp(b, "seventeen") == 0 )
                num = num * 10 + 17 ;
            else if( strcmp(b, "eighteen") == 0 )
                num = num * 10 + 18 ;
            else if( strcmp(b, "nineteen") == 0 )
                num = num * 10 + 19 ;
            else if( strcmp(b, "twenty") == 0 )
                num = num * 10 + 20 ;
            else if( strcmp(b, "thirty") == 0 )
                num = num * 10 + 30 ;
            else if( strcmp(b, "forty") == 0 )
                num = num * 10 + 40 ;
            else if( strcmp(b, "fifty") == 0 )
                num = num * 10 + 50 ;
            else if( strcmp(b, "sixty") == 0 )
                num = num * 10 + 60 ;
            else if( strcmp(b, "seventy") == 0 )
                num = num * 10 + 70 ;
            else if( strcmp(b, "eighty") == 0 )
                num = num * 10 + 80 ;
            else if( strcmp(b, "ninety") == 0 )
                num = num * 10 + 90 ;
            else if( strcmp(b, "hundred") == 0 )
                num = num * 10 + 100 ;
            else if( strcmp(b, "thousand") == 0 )
                num = num * 10 + 1000 ;
            else if( strcmp(b, "million") == 0 )
                num = num * 10 + 1000000 ;
            printf("%d\n", num) ;
            p = strtok(NULL, " ") ;
        }
        if(f == 1)
            printf("-");
        printf("%d\n", num) ;
    }
    return 0 ;
}
