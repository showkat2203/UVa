#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,j,i;
    int f;
    char A[1000],B[1000];
    while(gets(A)){
            int s=0;
        f=0;
    b=strlen(A);
    if(b==4 && A[0]=='D' && A[1]=='O' && A[2]=='N' && A[3]=='E'){
            break;
        }
         for(i=0;i<b;i++){
                if(A[i]>='A' && A[i]<='Z'){
                        B[s]=A[i]+32;
                        s++;
                }
                else if(A[i]>='a'&& A[i]<='z'){
                    B[s]=A[i];
                    s++;
                }
         }
    for(i=0,j=s-1;i<=j;i++,j--){
        if(B[i]!=B[j]){
                f=1;
            printf("Uh oh..\n");
            break;
        }
    }
        if(f==0){
            printf("You won't be eaten!\n");
        }

        }
    return 0;
}
