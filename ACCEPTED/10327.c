#include<stdio.h>
int main(){
    int s,d,t,n,cnt=0;
    int i[1005];
    while(scanf("%d",&n)==1){
        cnt=0;
        for(s=0;s<n;s++){
            scanf("%d",&i[s]);
       }
        for(d=0;d<n;d++){
            for(s=d+1;s<n;s++){
                if(i[d]>i[s]){
                    cnt++;
                }
            }
        }
        printf("Minimum exchange operations : %d\n",cnt);
 }
 return 0;
 }



