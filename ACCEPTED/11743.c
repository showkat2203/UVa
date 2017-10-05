#include<stdio.h>
#include<string.h>
int main()
{
    char  A[10],B[10],C[10],D[10];
    int i,j,s=0,sum=0;
    int k,l,m,n,o,p,q,r;
    int s1,s2,s3,s4,s5,s6,s7,s8,s9;
    scanf("%d\n",&j);
    while(j--){
        scanf("%s",A);scanf("%s",B);scanf("%s",C);scanf("%s",D);
        s1 = (A[2]-'0')*2;
        s2 = (A[0]-'0')*2;
        s3 = (B[2]-'0')*2;
        s4 = (B[0]-'0')*2;
        s5 = (C[2]-'0')*2;
        s6 = (C[0]-'0')*2;
        s7 = (D[2]-'0')*2;
        s8 = (D[0]-'0')*2;
        k = s1/10 + s1%10;
        l = s2/10 + s2%10;
        m = s3/10 + s3%10;
        n = s4/10 + s4%10;
        o = s5/10 + s5%10;
        p = s6/10 + s6%10;
        q = s7/10 + s7%10;
        r = s8/10 + s8%10;
        s9 = (A[1]-'0')+(A[3]-'0') + (B[1]-'0')+(B[3]-'0') +(C[1]-'0')+(C[3]-'0') + (D[1]-'0')+(D[3]-'0') ;
        s = k+l+m+n+o+p+q+r;
        s = s + s9;
        if(s%10==0){
            printf("Valid\n");
        }
        else
            printf("Invalid\n");
    }
    return 0;
}
