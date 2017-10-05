#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i=0,j,k,l,m,cnt=0;
    char A[1000],B[1000];
    int a,b,c,d,e,f;
    scanf("%d",&k);
    while(k--){
        scanf("%d",&m);
        getchar();
        if(i!=0){
                printf("\n");
            }
            i=1;
        printf("Case %d:\n",++cnt);

        while(m--){
            char A[10000];
            gets(A);
             l=0;
             f=0;
            l=strlen(A);
            for(a=0;a<l;a++){
                if(A[a]==' '){
                    if(f==0){
                        printf(" ");
                    }
                    f=1;
                }
                else {
                    f=0;
                    printf("%c",A[a]);
                }
            }
                printf("\n");
            }
        }

    return 0;
}
