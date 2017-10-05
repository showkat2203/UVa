#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,j,i,k,l,m,n;
    int f;
    char A[100];
    scanf("%d",&c);
    for(a=1;a<=c;a++){
    scanf("%s",A);
        f=0;
        m=0;
    b=strlen(A);
    for(i=0,j=b-1;i<=j;i++,j--){
        if(A[i]!=A[j]){
                f=1;
        }
    }
        if(f==0)
            printf("%s\n",A);
        else {
            for(k=0;k<b;k++){
                for(n=i;n>=0;n--){
                   for(i=0,j=b-1;i<=j;i++,j--){
                        if(A[i]!=A[j]){
                            m=1;;
                        }
                    }
                }
            }
        }
        if(m==0){
            printf("Yes\n");
        }
    }

    return 0;
}


