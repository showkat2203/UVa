#include <stdio.h>
#include <string.h>
int main()
{
    char A[1000000], B[1000000];
    long int i,j,l,k,m;
    while(scanf("%s %s", &A, &B)==2){
        l=strlen(A);
        k=strlen(B);
        for(i=0, j=0;i<l,j<k;j++){
            if(A[i]==B[j]) {
                i++;
            }
        }
        if(i==l){
            printf("Yes\n");
        }
        else {
                printf("No\n");
        }
    }
    return 0;
}

