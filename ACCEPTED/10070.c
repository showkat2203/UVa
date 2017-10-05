#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int a,b,c,d,l,e,m,n,cnt=0;
    char A[10000];
    int B, C, D, E ;
    while(scanf("%s",&A)==1){
        int i=0,j=0,k=0;
        a=0;b=0;c=0;d=0;e=0;
        if(cnt>0){
            printf("\n");
        }
        cnt++;
        l=strlen(A);
        for(i=0;i<l;i++){
            a=(a*10+(A[i]-'0'))%4;
            e=(e*10+(A[i]-'0'))%55;
            d=(d*10+(A[i]-'0'))%15;
            b=(b*10+(A[i]-'0'))%100;
            c=(c*10+(A[i]-'0'))%400;
        }
        if((a==0&&b!=0)||c==0){
            i=1;
            printf("This is leap year.\n");
            if(d==0){
                printf("This is huluculu festival year.\n");
            }
            if(e==0){
                printf("This is bulukulu festival year.\n");
            }
        }
        else {
            if(d==0){
                printf("This is huluculu festival year.\n");
            }
            else
                printf("This is an ordinary year.\n");
        }
    }
        return 0;
}


