#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l,m,n,o,c;
    char A[1000],B[10010];
    long long int a[100],b[100];
    //freopen("11340.txt","r",stdin);
    while(scanf("%d\n",&k)==1){
        for(c=1;c<=k;c++){
            double sum=0;
            scanf("%d\n",&n);
            for(i=0;i<n;i++){
                scanf("%c %lld\n",&A[i],&a[i]);
            }
            scanf("%d\n",&o);
            for(m=0;m<o;m++){
                gets(B);
                l=strlen(B);
                for(i=0;i<n;i++){
                    for(j=0;j<l;j++){
                        if(A[i]==B[j]){
                            sum=sum+a[i];
                        }
                    }
                }
            }
            printf("%.2lf$\n",sum/100);
        }
    }
    return 0;
}
