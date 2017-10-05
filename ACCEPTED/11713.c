#include<stdio.h>
#include<string.h>
int main()
{
    char A[10000],B[1000],C[1000],D[1000];
    int i,j,k,l,m,n,p,o;
    scanf("%d",&j);
    while(j--){
        scanf("%s %s",A,B);
        l=strlen(A);
        k=strlen(B);
        m=0;
        n=0;
        if(l!=k){
            printf("No\n");
        }
        else{
            for(i=0;i<l;i++){
                if(A[i]=='a'||A[i]=='e'||A[i]=='i'||A[i]=='o'||A[i]=='u'){
                    continue;
                }
                else{
                    C[m++]=A[i];
                }
                if(B[i]=='a'||B[i]=='e'||B[i]=='i'||B[i]=='o'||B[i]=='u'){
                    continue;
                }
                else{
                    D[n++]=B[i];
                }
            }
            C[m]='\0';
            D[n]='\0';
            if( strcmp(C,D)!=0){
                printf("No\n");
            }
            else
                printf("Yes\n");
            }
    }
    return 0;
}
