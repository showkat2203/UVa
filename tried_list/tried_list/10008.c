#include<stdio.h>
#include<string.h>
int main()
{
    long long i,j,a[100000],cnt=0,l;
    char A[100000];
    int tst;
    scanf("%d\n",&tst);
    while(tst--){
        gets(A);
        //cnt=0;
        l=strlen(A);
        for(i=0;i<l;i++){
            if(A[i]>='a'&&A[i]<='z'){
                A[i]=A[i]-32;
            }
        }
        for(i=0;i<26;i++){
            a[i]=0;
        }
        for(i=0;i<l;i++){
            switch(A[i]){
                case 'A':
                    a[0]=a[0]+1;
                    break;
                case 'B':
                    a[1]=a[1]+1;
                    break;
                case 'C':
                    a[2]=a[2]+1;
                    break;
                case 'D':
                    a[3]=a[3]+1;
                    break;
                case 'E':
                    a[4]=a[4]+1;
                    break;
                case 'F':
                    a[5]=a[5]+1;
                    break;
                case 'G':
                    a[6]=a[6]+1;
                    break;
                case 'H':
                    a[7]=a[7]+1;
                    break;
                case 'I':
                    a[8]=a[8]+1;
                    break;
                case 'J':
                    a[9]=a[9]+1;
                    break;
                case 'K':
                    a[10]=a[10]+1;
                    break;
                case 'L':
                    a[11]=a[11]+1;
                    break;
                case 'M':
                    a[12]=a[12]+1;
                    break;
                case 'N':
                    a[13]=a[13]+1;
                    break;
                case 'O':
                    a[14]=a[14]+1;
                    break;
                case 'P':
                    a[15]=a[15]+1;
                    break;
                case 'Q':
                    a[16]=a[16]+1;
                    break;
                case 'R':
                    a[17]=a[17]+1;
                    break;
                case 'S':
                    a[18]=a[18]+1;
                    break;
                case 'T':
                    a[19]=a[19]+1;
                    break;
                case 'U':
                    a[20]=a[20]+1;
                    break;
                case 'V':
                    a[21]=a[21]+1;
                    break;
                case 'W':
                    a[22]=a[22]+1;
                    break;
                case 'X':
                    a[23]=a[23]+1;
                    break;
                case 'Y':
                    a[24]=a[24]+1;
                    break;
                case 'Z':
                    a[25]=a[25]+1;
                    break;
            }
        }
        for()
    }
    return 0;
}

