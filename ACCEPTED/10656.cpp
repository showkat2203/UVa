#include<stdio.h>
#include<stdlib.h>
int main()
{
    int A[10000], a,b,c,d,i,j;
    while(scanf("%d",&j)==1&&j>0){
        a=0;
        for(i=0;i<j;i++){
            scanf("%d",&A[i]);
        }
        for(i=0;i<j;i++){
            if (A[i]!=0){
                if(a==1){
                    printf(" ");
                }
                a=1;
           printf("%d",A[i]);
        }
        }
        if(a==0){
            printf("0");
        }
        printf("\n");
    }
    return 0;
}


