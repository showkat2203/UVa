#include<stdio.h>
int main()
{
    int n,a,b,c,d,e,f,i,j,A[205][205];
    //freopen("541.txt","r",stdin);
    while(scanf("%d",&n)==1&&n>0){
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                scanf("%d",&A[i][j]);
            }
        }
        a=0;b=0;c=0;e=0;d=0,f=0;
        for(i=1;i<=n;i++){
            a=0;
            for(j=1;j<=n;j++){
                a=a+A[i][j];
            }
            if(a%2!=0){
                c=i;
                e++;
            }
        }
        for(j=1;j<=n;j++){
            b=0;
            for(i=1;i<=n;i++){
                b=b+A[i][j];
            }
            if(b%2!=0){
                d=j;
                f++;
            }
        }
        if(e==0&&f==0){
            printf("OK\n");
        }
        else if(e==1&&f==1){
            printf("Change bit (%d,%d)\n",c,d);
        }
        else
            printf("Corrupt\n");
    }
    return 0;
}

