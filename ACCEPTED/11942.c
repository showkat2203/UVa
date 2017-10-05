#include<stdio.h>
int main()
{
    int i,j,A[100],n,m,d;
    scanf("%d",&j);
    printf("Lumberjacks:\n");
    while(j--){
        for(i=0;i<10;i++){
            scanf("%d",&A[i]);
        }
        n=A[0];
        m=A[1];
        if(n>m){
                d=0;
            for(i=0;i<9;i++){
                if(A[i]>A[i+1]){
                    d++;
                }
            }
        }
        else if(n<m){
                d=0;
            for(i=0;i<9;i++){
                if(A[i]<A[i+1]){
                    d++;
                }
            }
        }
        if(d==9){
                printf("Ordered\n");
            }
            else
                printf("Unordered\n");
    }
    return 0;
}
