#include<stdio.h>
#include<string.h>
int main()
{
    char A[650];
    int i,j,k,l,a,m,r,g,I,t,cnt,res;
    scanf("%d",&j);
    while(j--){
            scanf("%s",A);
            res=650;
        a=0,m=0;r=0;g=0;I=0;t=0;
        cnt=0;
        l=strlen(A);
        for(i=0;i<l;i++){
            if(A[i]=='A'){
                    a++;
            }
            else if(A[i]=='M'){
                    m++;
            }
             else if(A[i]=='R'){
                    r++;
            }
             else if(A[i]=='G'){
                    g++;
            }
             else if(A[i]=='I'){
                    I++;
            }
            else if(A[i]=='T'){
                    t++;
            }
        }
        a/=3;
        r/=2;
        if(m<res){
            res=m;
        }
        if(a<res){
            res=a;
            }
        if(r<res){
            res=r;
            }
        if(g<res){
            res=g;
            }
        if(I<res){
            res=I;
            }
        if(t<res){
            res=t;
            }
        printf("%d\n",res);
    }
    return 0;
}
