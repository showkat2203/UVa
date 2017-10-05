#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
    int i,j,l;
    char A[1000];
    while(scanf("%s",A)==1){
        l = strlen(A);
        for(i=0;i<l;i++){
            if(A[i]=='B'||A[i]=='F'||A[i]=='P'||A[i]=='V'){
                if(A[i-1]!='B'&&A[i-1]!='F'&&A[i-1]!='P'&&A[i-1]!='V'){
                    printf("1");
                }
            }
            else if(A[i]=='C'||A[i]=='G'||A[i]=='J'||A[i]=='K'||A[i]=='Q'||A[i]=='S'||A[i]=='X'||A[i]=='Z'){
                    if(A[i-1]!='C'&&A[i-1]!='G'&&A[i-1]!='J'&&A[i-1]!='K'&&A[i-1]!='Q'&&A[i-1]!='S'&&A[i-1]!='X'&&A[i-1]!='Z'){
                        printf("2");
                    }
            }
            else if(A[i]=='D'||A[i]=='T'){
                if(A[i-1]!='D'&&A[i-1]!='T'){
                    printf("3");
                }
            }
            else if(A[i]=='L'){
                if(A[i-1]!='L'){
                    printf("4");
                }
            }
            else if(A[i]=='M'||A[i]=='N'){
                    if(A[i-1]!='M'&&A[i-1]!='N'){
                    printf("5");
                }
            }
            else if(A[i]=='R'){
                    if(A[i-1]!='R'){
                    printf("6");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
