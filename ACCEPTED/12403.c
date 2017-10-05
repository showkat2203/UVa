#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l,n,s=0;
    char A[1000],B[1000];
    scanf("%d",&j);
    while(j--){
        scanf("%s",A);
        l=strlen(A);
        if(A[0]=='d'&&A[1]=='o'&&A[2]=='n'&&A[3]=='a'&&A[4]=='t'&&A[5]=='e'){
                scanf("%d",&k);
                s=s+k;
        }
        else
            printf("%d\n",s);
        }
    return 0;
}
