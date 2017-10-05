#include<stdio.h>
int main()
{
    int i,j,t,k,l,m,n;
    while(scanf("%d",&t)==1){
        for(i=1;i<=t;i++){
                k=0;
            scanf("%d",&n);
            for(j=1;j<=n;j++){
                    scanf("%d",&m);
            if(m>k){
                k=m;
            }
        }
         printf("Case %d: %d\n",i,k);
        }
    }
    return 0;
}
