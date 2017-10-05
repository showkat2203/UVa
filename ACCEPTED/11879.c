#include<stdio.h>
#include<string.h>
int main()
{
    int i,s,r,l;
    char A[1000];
    while(gets(A)){
        int j=0;
        r=0;
        l=strlen(A);
        if(l==1 && A[0]=='0'){
            break;
        }
        for(i=0;i<l;i++){
            s=r*10+(A[i]-'0');
            r=s%17;
        }
        if(r==0){
            printf("1\n");
        }
        else{
            printf("0\n");
         }
    }
    return 0;
}
