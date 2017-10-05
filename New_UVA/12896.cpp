#include <bits/stdc++.h>

using namespace std ;

int main()
{
    char msg[1010] ;
    int i, j, k, l, a[1010], b[1010], tst , m, n, ch ;
    scanf("%d", &tst) ;
    while(tst--)
    {
        scanf("%d", &n) ;
        for(i = 0; i<n; i++)    scanf("%d", &a[i]) ;
        for(i = 0; i<n; i++)    scanf("%d", &b[i]) ;
        for( i = 0; i<n; i++)
        {
            if( a[i] == 1)
            {
                if(b[i] == 1)
                    printf(".");
                else if(b[i] == 2)
                    printf(",") ;
                else if(b[i] == 3)
                    printf("?");
                else if(b[i] == 4)
                   ch = 34 , printf("%c", ch) ;
                else
                    printf("1");
            }
            else if( a[i] == 2)
            {
                if(b[i] == 1)
                    printf("a");
                else if(b[i] == 2)
                    printf("b") ;
                else if(b[i] == 3)
                    printf("c");
                else if(b[i] == 4)
                    printf("2");
            }
            else if( a[i] == 3)
            {
                if(b[i] == 1)
                    printf("d");
                else if(b[i] == 2)
                    printf("e") ;
                else if(b[i] == 3)
                    printf("f");
                else if(b[i] == 4)
                    printf("3");
            }
            else if( a[i] == 4)
            {
                if(b[i] == 1)
                    printf("g");
                else if(b[i] == 2)
                    printf("h") ;
                else if(b[i] == 3)
                    printf("i");
                else if(b[i] == 4)
                    printf("4");
            }
            else if( a[i] == 5 )
            {
                if(b[i] == 1)
                    printf("j");
                else if(b[i] == 2)
                    printf("k") ;
                else if(b[i] == 3)
                    printf("l");
                else if(b[i] == 4)
                    printf("5");
            }
            else if( a[i] == 6)
            {
                if(b[i] == 1)
                    printf("m");
                else if(b[i] == 2)
                    printf("n") ;
                else if(b[i] == 3)
                    printf("o");
                else if(b[i] == 4)
                    printf("6");
            }
            else if( a[i] == 7)
            {
                if(b[i] == 1)
                    printf("p");
                else if(b[i] == 2)
                    printf("q") ;
                else if(b[i] == 3)
                    printf("r");
                else if(b[i] == 4)
                    printf("s") ;
                else
                    printf("7");
            }
            else if( a[i] == 8)
            {
                if(b[i] == 1)
                    printf("t");
                else if(b[i] == 2)
                    printf("u") ;
                else if(b[i] == 3)
                    printf("v");
                else if(b[i] == 4)
                    printf("8");
            }
            else if( a[i] == 9)
            {
                if(b[i] == 1)
                    printf("w");
                else if(b[i] == 2)
                    printf("x") ;
                else if(b[i] == 3)
                    printf("y");
                else if(b[i] == 4)
                    printf("z") ;
                else
                    printf("9");
            }
            else if( a[i] == 0)
            {
                if(b[i] == 1)
                    printf(" ");
                else if(b[i] == 2)
                    printf("0") ;
            }
        }
        printf("\n") ;
    }
    return 0 ;
}
