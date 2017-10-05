#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<algorithm>
#include<cstring>

using namespace std;

int cnt, Q, vis[10][10],A[10][10],sum,res;

void mark(int r,int c)
{
    int a , b;
    a = r;
    b = c;
    sum+=A[a][b];
    while((a<8 && a>=0) && (b<8 && b>=0))
    {
        vis[a][b]+=1;
        a++;
        b++;
    }

    a = r;
    b = c;
    while((a<8 && a>=0) && (b<8 && b>=0))
    {
        vis[a][b]+=1;
        a--;
        b--;
    }

    a = r;
    b = c;
    while((a<8 && a>=0) && (b<8 && b>=0))
    {
        vis[a][b]+=1;
        a--;
        b++;
    }

    a = r;
    b = c;
    while((a<8 && a>=0) && (b<8 && b>=0))
    {
        vis[a][b]+=1;
        a++;
        b--;
    }
    b = c;
    a = r;
    while((a<8 && a>=0) && (b<8 && b>=0))
    {
        vis[a][b]+=1;
        a++;
    }
    b = c;
    a = r;
    while((a<8 && a>=0) && (b<8 && b>=0))
    {
        vis[a][b]+=1;
        a--;
    }
    a = r;
    b = c;
    while((a<8 && a>=0) && (b<8 && b>=0))
    {
        vis[a][b]+=1;
        b++;
    }
    a = r;
    b = c;
    while((a<8 && a>=0) && (b<8 && b>=0))
    {
        vis[a][b]+=1;
        b--;
    }

}

void unmark(int r, int c)
{
    int a , b;
    a = r;
    b = c;
    sum-=A[a][b];
    while((a<8 && a>=0) && (b<8 && b>=0))
    {
        vis[a][b]-=1;
        a++;
        b++;
    }

    a = r;
    b = c;
    while((a<8 && a>=0) && (b<8 && b>=0))
    {
        vis[a][b]-=1;
        a--;
        b--;
    }

    a = r;
    b = c;
    while((a<8 && a>=0) && (b<8 && b>=0))
    {
        vis[a][b]-=1;
        a--;
        b++;
    }

    a = r;
    b = c;
    while((a<8 && a>=0) && (b<8 && b>=0))
    {
        vis[a][b]-=1;
        a++;
        b--;
    }
    b = c;
    a = r;
    while((a<8 && a>=0) && (b<8 && b>=0))
    {
        vis[a][b]-=1;
        a++;
    }
    b = c;
    a = r;
    while((a<8 && a>=0) && (b<8 && b>=0))
    {
        vis[a][b]-=1;
        a--;
    }
    a = r;
    b = c;
    while((a<8 && a>=0) && (b<8 && b>=0))
    {
        vis[a][b]-=1;
        b++;
    }
    a = r;
    b = c;
    while((a<8 && a>=0) && (b<8 && b>=0))
    {
        vis[a][b]-=1;
        b--;
    }
}

void backtrack(int r,int Q)
{
    if(Q == 8)
    {
        res = max(res,sum);
       // printf("%d\n",sum);
        cnt++;
        return;
    }
    for(int c = 0; c<8; c++)
    {
        if(vis[r][c] == 0)
        {
            mark(r,c);
            backtrack(r+1,Q+1);
            unmark(r,c);
        }
    }
}

int main()
{
   // freopen("167.txt","r",stdin);
    int i,j,k,l,n;
    scanf("%d",&n);
    while(n--)
    {
        memset(vis,0,sizeof vis);
        cnt=0;
        res = -1;
        sum = 0;
        for(i=0;i<8;i++)
        {
            for(j=0; j<8; j++)
                scanf("%d",&A[i][j]);
        }
        backtrack(0,0);
        printf("%5d\n",res);
    }
    return 0;
}
