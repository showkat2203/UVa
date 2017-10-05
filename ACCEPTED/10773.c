#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int i,j,k,cnt=0;
    double d,v,u,res,r1,r2;
    scanf("%d",&j);
    while(j--){
        scanf("%lf %lf %lf",&d,&v,&u);
        if(d==0||v==0||v>=u){
            printf("Case %d: can't determine\n",++cnt);
        }
        else {
            r1=d*1.0/u;
            r2=d*1.0/sqrt((u*u-v*v));
            res=r2-r1;
            printf("Case %d: %.3lf\n",++cnt,res);
        }
    }
    return 0;
}
