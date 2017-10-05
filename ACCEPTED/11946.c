#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l,n;
    char A[10000];
    scanf("%d",&j);
    getchar();
    while(j--){
        while(gets(A)){
        l=strlen(A);
        for(i=0;i<l;i++){
            if(A[i]=='4'){
                printf("A");
            }
            else if(A[i]=='8'){
                printf("B");
            }
            else if(A[i]=='3'){
                printf("E");
            }
           else  if(A[i]=='1'){
                printf("I");
            }
           else  if(A[i]=='6'){
                printf("G");
            }
           else if(A[i]=='0'){
                printf("O");
            }
            else  if(A[i]=='9'){
                printf("P");
            }
            else  if(A[i]=='5'){
                printf("S");
            }
            else  if(A[i]=='7'){
                printf("T");
            }
            else  if(A[i]=='2'){
                printf("Z");
                }

            else
                printf("%c",A[i]);
                }
                printf("\n");
        }

    }
    return 0;
}
