#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,r,p,q;
    while(scanf("%d",&n)==1)
        for(p=1;p<=n;p++){
            scanf("%d %d",&k,&l);
            for(r=1;r<=l;r++){
                for(i=1;i<=k;i++){
                    for(j=1;j<=i;j++){
                        printf("%d",i);
                    }
                    printf("\n");
                }
            for(i=k-1;i>=1;i--){
                for(j=1;j<=i;j++){
                    printf("%d",i);
                }
                printf("\n");
            }
                if(p!=n||r!=l){
                    printf("\n");
                }
          }
        }
    return 0;
}
