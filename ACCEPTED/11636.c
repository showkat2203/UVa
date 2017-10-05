#include<stdio.h>
int main()
{
    int i,j,cnt,k,cs=0,l,m;
    while(scanf("%d",&j)==1&&j>0){
        cnt=0;
        k=1;
        while(k<j){
            k=k*2;
            cnt++;
        }
            printf("Case %d: %d\n",++cs,cnt);
        }
    return 0;
}
