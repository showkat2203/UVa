#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,k,l,cnt=0,tst;
    char A[10000],c;
    scanf("%d\n",&tst);
    while(tst--){
        int m=0,n,s=0;
        scanf("%s",A);
        l=strlen(A);
        printf("Case %d: ",++cnt);
        for(i=0;i<l;i++){
            k=0;
            if(A[i]>='A' && A[i]<='Z'){
                c=A[i];
            }
            else if(A[i]>=48 && A[i]<=57){
                k=k+A[i]-'0';
                i++;
                while(A[i]>=48 && A[i]<=57){
                    k=k*10+A[i]-'0';
                    i++;
                }
                for(j=0;j<k;j++){
                    printf("%c",c);
                }
                i--;
            }
        }
        printf("\n");
    }
    return 0;
}
