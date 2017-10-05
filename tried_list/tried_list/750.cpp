#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int row, col, vis[10][10] , cnt = 0, A[10][10] , k , l ;

bool in_range(int a, int b)
{
    if(a<=8 && a>=1 && b<=8 && b>=1)
        return true;
    else
        return false;
}

int mark(int r, int c)
{
    int a = r;
    int b = c;

    while(in_range(a,b))
    {
        if( vis[a][b] == 1)
            return 0 ;
        a++;
        b++;
    }
    a = r;
    b = c;
    while(in_range(a,b))
    {
        if( vis[a][b] == 1)
            return 0;
        a--;
        b--;
    }
    a = r;
    b = c;
    while(in_range(a,b))
    {
        if( vis[a][b] == 1)
            return 0;
        a--;
        b++;
    }
    a = r;
    b = c;
    while(in_range(a,b))
    {
        if( vis[a][b] == 1)
            return 0;
        a++;
        b--;
    }
    a = r;
    b = c;
    for(int i=1; i<=8; i++)
    {
        if(vis[a][i] == 1)
            return 0 ;
    }
    a = r;
    b = c;
    for(int i=1; i<=8; i++)
    {
        if(vis[i][b] == 1)
            return 0 ;
    }
    return 1;
}

void sorting(int c)
{
    int temp[10] ;
    for(int i=1; i<c - 1; i++)
    {
        for(int j = i + 1; j<c; j++)
        {
            for(int b =1; b<=8; b++)
            {
                if( A[i][b] < A[j][b] )
                    b = 9;
                if( A[i][b] > A[j][b] )
                {
                    for(int m = 1; m<=8; m++) temp[m] = A[i][m];
                    for(int m = 1; m<=8; m++) A[i][m] = A[j][m];
                    for(int m = 1; m<=8; m++) A[j][m] = temp[m];
                    b = 9;
                }
            }
        }
    }
}


void bctk(int r,int Q)
{
    if(Q == 8)
    {
        for(int i=1; i<=8; i++)
        {
            for(int j = 1; j<=8; j++)
            {
                if(vis[j][i] == 1)
                {
                    A[k][l++] = j;
                }
            }
        }
        k++;
        l = 1;
        return ;
    }
    if(r == row) bctk(r + 1, Q);
    else
        for(int c = 1; c<=8; c++)
        {
            if(c != col)
            if( mark(r,c ))
            {
                vis[r][c] = 1;
                bctk(r+1,Q+1);
                vis[r][c] = 0;
            }
        }
}


int main()
{
    int test, tot = 0;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d %d",&row,&col);
        cnt = 0;
        memset( vis, 0, sizeof vis );
        k = 1;
        l = 1;
        vis[row][col] = 1;
        if(tot != 0)
            printf("\n");
        tot++;
        printf("SOLN       COLUMN\n #      1 2 3 4 5 6 7 8\n\n");
        bctk(1,1);
        sorting(k);
        int a = 1;
        for(int i = 1; i<k; i++)
        {
            printf("%2d      ",a);
            for(int j = 1; j<=8; j++)
            {
                if(j<8)
                    printf("%d ",A[i][j]);
                else
                    printf("%d",A[i][j]);
            }
                printf("\n");
                a++;
        }
    }
    return 0;
}
