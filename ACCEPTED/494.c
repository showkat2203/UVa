#include<stdio.h>
#include<string.h>
int main()
{
    char A[10000];
    int i,j,k,l,cnt=0;
    while(gets(A)){
            cnt=0;
            k=1;
        for(i=0;A[i];i++){
            if((A[i]>='A'&&A[i]<='Z')||(A[i]>='a'&&A[i]<='z')){
                if(k==1){
                    cnt++;
                     k=0;
                }
            }
            else
                k=1;
        }
        printf("%d\n",cnt);
    }
    return 0;
}
