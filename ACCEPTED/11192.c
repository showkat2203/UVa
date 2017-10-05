#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l,d,a,n;
    char A[1000];
    while(scanf("%d",&n)==1&&n>0){
            scanf("%s",&A);
            l=strlen(A);
            d=l/n;
            for(i=1;i<=n;i++){
                a=i*d;
                for(j=a-1;j>=a-d;j--){
                     printf("%c",A[j]);
                }
            }
            printf("\n");
        }
    return 0;
}
