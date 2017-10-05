#include<stdio.h>
#include<string.h>
int main()
{
    int i,s,r,l;
    char A[1000];
    while(gets(A)){
        r=0;
        int j=0;
        l=strlen(A);
        if(l==1 && A[0]=='0'){
            break;
        }
        for(i=0;i<l;i++){
            printf("%c",A[i]);
        }
        for(i=0;i<l;i++){
            s=r*10+(A[i]-'0');
            r=s%9;
            if(s%9==0){
                j++;
            }
        }
        if(r==0){
            printf(" is a multiple of 9 and is a degree of %d\n",j);
        }
        else{
            printf(" is not a multiple of 9.\n");
         }
    }
    return 0;
}
