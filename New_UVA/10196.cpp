#include <bits/stdc++.h>

using namespace std ;

char a[15][15] ,  b[15] ;
int rr[] = {1,1,0,-1,-1,-1,0,1} ;
int cc[] = {0,1,1,1,0,-1,-1,-1} ;
int kr[] ={1,1,2,2,-1,-1,-2,-2} ;
int kc[] ={2,-2,1,-1,2,-2,1,-1} ;

int in_range(int i, int j)
{
    if( i >= 8 || i < 0 || j >= 8 || j < 0  )
        return 0 ;
    return 1 ;
}

int pawn(int i, int j)
{
    if( a[i][j] == 'k' )
    {
        if( a[i+1][j+1] == 'P' || a[i+1][j-1] == 'P' || a[i+1][j-1] == 'K' || a[i+1][j+1] == 'K')
            return 0 ;
        else
            return 1 ;
    }
    else if( a[i][j] == 'K')
    {
        if( a[i-1][j-1] == 'p' || a[i-1][j+1] == 'p' || a[i-1][j-1] == 'k' || a[i-1][j+1] == 'k')
            return 0 ;
        else
            return 1 ;
    }
}

int rook(int i, int j )
{
    int m = i, n = j ;
    if( a[m][n] == 'k' )
    {
        while(in_range(m, n))
        {
            m++;
            if( in_range(m, n))
            {
                if( a[m][n] == 'Q' || a[m][n] == 'R' )
                    return 0 ;
                else if( a[m][n] == '.' )
                    continue ;
                else
                    break ;
            }
            else
                break;
        }
        m = i , n = j ;
        while(in_range(m, n))
        {
            m--;
            if( in_range(m, n))
            {
                if( a[m][n] == 'Q' || a[m][n] == 'R')
                    return 0 ;
                else if( a[m][n] == '.' )
                    continue ;
            }
            else
                break;
        }
        m  = i , n = j ;
        while(in_range(m, n))
        {
            n++;
            if( in_range(m, n))
            {
                if( a[m][n] == 'Q' || a[m][n] == 'R')
                    return 0 ;
                else if( a[m][n] == '.' )
                    continue ;
                else
                    break ;
            }
            else
                break;
        }
        m  = i , n = j ;
        while(in_range(m, n))
        {
            n--;
            if( in_range(m, n))
            {
                if( a[m][n] == 'Q' || a[m][n] == 'R' )
                    return 0 ;
                else if( a[m][n] == '.' )
                    continue ;
                else
                    break ;
            }
            else
                break;
        }
        return 1 ;
    }
    else if ( a[m][n] == 'K' )
    {
        while(in_range(m, n))
        {
            m++;
            if( in_range(m, n))
            {
                if( a[m][n] == 'q' || a[m][n] == 'r')
                    return 0 ;
                else if( a[m][n] == '.' )
                    continue ;
                else
                    break ;
            }
            else
                break ;
        }
        m = i , n = j ;
        while(in_range(m, n))
        {
            m--;
            if( in_range(m, n))
            {
               if( a[m][n] == 'q' ||  a[m][n] == 'r')
                    return 0 ;
                else if( a[m][n] == '.' )
                    continue ;
                else
                    break ;
            }
            else
                break ;
        }
        m  = i , n = j ;
        while(in_range(m, n))
        {
            n++;
            if( in_range(m, n))
            {
                if( a[m][n] == 'q' || a[m][n] == 'r' )
                    return 0 ;
                else if( a[m][n] == '.' )
                    continue ;
                else
                    break ;
            }
            else
                break ;
        }
        m  = i , n = j ;
        while(in_range(m, n))
        {
            n--;
            if( in_range(m, n))
            {
                if( a[m][n] == 'q' || a[m][n] == 'r' )
                    return 0 ;
                else if( a[m][n] == '.' )
                    continue ;
                else
                    break;
            }
            else
                break ;
        }
        return 1 ;
    }
}

int bishop(int i, int j )
{
    int m = i, n = j ;
    if( a[m][n] == 'k' )
    {
        while(in_range(m, n))
        {
            m++;
            n++ ;
            if( in_range(m, n))
            {
                if( a[m][n] == 'Q' || a[m][n] == 'B' )
                    return 0 ;
                else if( a[m][n] == '.' )
                    continue ;
                else
                    break;
            }
            else
                break;
        }
        m = i , n = j ;
        while(in_range(m, n))
        {
            m++ ;
            n--;
            if( in_range(m, n))
            {
                if( a[m][n] == 'Q' || a[m][n] == 'B')
                    return 0 ;
                else if( a[m][n] == '.' )
                    continue ;
                else
                    break ;
            }
            else
                break;
        }
        m  = i , n = j ;
        while(in_range(m, n))
        {
            m--;
            n++;
            if( in_range(m, n))
            {
                if( a[m][n] == 'Q' || a[m][n] == 'B')
                    return 0 ;
                else if( a[m][n] == '.' )
                    continue ;
                else
                    break;
            }
            else
                break;
        }
        m  = i , n = j ;
        while(in_range(m, n))
        {
            m--; n-- ;
            if( in_range(m, n))
            {
                if( a[m][n] == 'Q' || a[m][n] == 'B' )
                    return 0 ;
                else if( a[m][n] == '.' )
                    continue ;
                else
                    break ;
            }
            else
                break;
        }
        return 1 ;
    }
    else if ( a[m][n] == 'K' )
    {
        while(in_range(m, n))
        {
            m++;
            n++;
            if( in_range(m, n))
            {
                if( a[m][n] == 'q' || a[m][n] == 'b')
                    return 0 ;
                else if( a[m][n] == '.' )
                    continue ;
                else
                    break ;
            }
            else
                break ;
        }
        m = i , n = j ;
        while(in_range(m, n))
        {
            m++;
            n--;
            if( in_range(m, n))
            {
               if( a[m][n] == 'q' ||  a[m][n] == 'b')
                    return 0 ;
                else if( a[m][n] == '.' )
                    continue ;
                else
                    break ;
            }
            else
                break ;
        }
        m  = i , n = j ;
        while(in_range(m, n))
        {
            m--;
            n++;
            if( in_range(m, n))
            {
                if( a[m][n] == 'q' || a[m][n] == 'b' )
                    return 0 ;
                else if( a[m][n] == '.' )
                    continue ;
                else
                    break ;
            }
            else
                break ;
        }
        m  = i , n = j ;
        while(in_range(m, n))
        {
            m--;
            n--;
            if( in_range(m, n))
            {
                if( a[m][n] == 'q' || a[m][n] == 'b' )
                    return 0 ;
                else if( a[m][n] == '.' )
                    continue ;
                else
                    break ;

            }
            else
                break ;
        }
        return 1 ;
    }
}

int knight(int i, int j)
{
    int upore, niche ;
    if( a[i][j] == 'k')
    {
        for( int k = 0; k < 8; k++)
        {
            upore = i + kr[k] ;
            niche = j + kc[k] ;
            if( in_range(upore, niche) )
            {
                if( a[upore][niche] == 'N')
                    return 0 ;
            }
        }
        return 1 ;
    }
    else if( a[i][j] == 'K' )
    {
        for( int k = 0; k < 8; k++)
        {
            upore = i + kr[k] ;
            niche = j + kc[k] ;
            if( in_range(upore, niche) )
            {
                if( a[upore][niche] == 'n')
                    return 0 ;
            }
        }
        return 1 ;
    }
}

int main()
{
    //freopen("in.txt", "r", stdin) ;
    int i, j, k, l, m, n, f, cas = 0, res ;
    while( 1 )
    {
        f = 0 ;
        i = 0 ;
        int  Fk_r = -1, Fk_c = -1, Sc_r = -1, Sc_c = -1 ;
        while( gets(b) && b[0] != NULL )
            strcpy(a[i++], b) ;
        for( i = 0; i < 8 ; i++)
        {
            for( j = 0; j < 8 ; j++)
            {
                if( a[i][j] == 'k' )
                {
                    Fk_r = i ; Fk_c = j;
                }
               if( a[i][j] == 'K' )
               {
                    Sc_r = i;
                    Sc_c = j ;
                }
                if( a[i][j] != '.' )
                    f = 1 ;
            }
        }
        if( f == 0 )
            break ;
        if( ( Fk_r != -1 &&  Fk_c != -1 ) &&  ( !pawn(Fk_r , Fk_c ) ))
        {
            //printf("F\n") ;
            printf("Game #%d: black king is in check.\n", ++cas);
            continue ;
        }
        if( ( Sc_r != -1 &&  Sc_c != -1 ) &&  !pawn(Sc_r, Sc_c) )
        {
            //printf("S\n");
            printf("Game #%d: white king is in check.\n", ++cas);
            continue ;
        }
        if ( ( Fk_r != -1 &&  Fk_c != -1 ) &&  !knight(Fk_r , Fk_c ) )
        {
            //printf("T");
            printf("Game #%d: black king is in check.\n", ++cas);
            continue ;
        }
        if( ( Sc_r != -1 &&  Sc_c != -1 ) &&  !knight( Sc_r, Sc_c ) )
        {
            //printf("Fou\n") ;
            printf("Game #%d: white king is in check.\n", ++cas);
            continue ;
        }
        if( ( Fk_r != -1 &&  Fk_c != -1 ) )
        {
            if( !rook(Fk_r , Fk_c ) || !bishop(Fk_r , Fk_c) )
            {
                //printf("fif\n") ;
                printf("Game #%d: black king is in check.\n", ++cas);
                continue ;
            }
        }
        if( Sc_r != -1 &&  Sc_c != -1 )
        {
            if( !rook(Sc_r , Sc_c ) || !bishop(Sc_r , Sc_c) )
            {
                //printf("Six\n") ;
                printf("Game #%d: white king is in check.\n", ++cas);
                continue ;
            }
        }
        printf("Game #%d: no king is in check.\n", ++cas) ;
    }
    return 0 ;
}

