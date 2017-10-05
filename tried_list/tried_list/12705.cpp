#include <bits/stdc++.h>

using namespace std;

int main()
{
    char a[110] ;
    int i, j, k, l, n, sum, r, c ;
    scanf("%d\n", &j);
    //getchar() ;
    while(j--)
    {
        gets(a);
        l = strlen(a) ;
        sum = 0 ;
        for(i=0; i<l; i++)
        {
            if(a[i] == 'A')
                sum+= 2;
            else if(a[i] == 'C' || a[i] == 'L')
                sum+=3;
            else if(a[i] == 'D' || a[i] == 'F' || a[i] == 'E' )
                sum+=4;
            else if(a[i] == 'B' || a[i] == 'G' || a[i] == 'J' || a[i] == 'O')
                sum+=5;
            else if(a[i] == 'H' || a[i] == 'K' || a[i] == 'P' || a[i] == 'U')
                sum+=6;
            else if(a[i] == 'I' || a[i] == 'Q' || a[i] == 'V')
                sum+=7;
            else if(a[i] == 'M' || a[i] == 'R' || a[i] == 'W')
                sum+=8;
            else if(a[i] == 'N' || a[i] == 'S' || a[i] == 'X')
                sum+=9 ;
            else if(a[i] == 'T' || a[i] == 'Y')
                sum+=10 ;
            else if(a[i] == 'Z')
                sum+=11;
        }
        printf("%d\n", sum) ;
    }
    return 0 ;
}
