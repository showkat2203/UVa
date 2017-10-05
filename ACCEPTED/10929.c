#include<stdio.h>
#include<string.h>
int main()
{
    int i,s,r,l;
    char A[1000];
    while(gets(A)){
        r=0;
        l=strlen(A);
        if(l==1 && A[0]=='0'){
            break;
        }
        for(i=0;i<l;i++){
            printf("%c",A[i]);
        }
        for(i=0;i<l;i++){
            s=r*10+(A[i]-'0');
            r=s%11;
        }
        if(r==0){
            printf(" is a multiple of 11.\n");
        }
        else{
            printf(" is not a multiple of 11.\n");
         }
    }
    return 0;
}
