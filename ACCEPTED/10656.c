#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[10005],b,c,d,i,j;
    while(scanf("%d",&j)==1&&j>0){
        for(i=0;i<j;i++){
            scanf("%d",&a[i]);
        }
         bool space=1;
         for(i=0;i<j;i++){
            if (a[i]!=0){
                if (space==0)
                    printf (" ");
                space = 0;
                printf ("%d", a[i]);
            }
        }
        if (space==1){
            printf ("0");
        }
        printf ("\n");
    }

    return 0;
}
