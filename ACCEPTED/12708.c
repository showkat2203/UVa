#include<stdio.h>
int main () {
    int kase;
    scanf ( "%d", &kase );
    while ( kase-- ) {
        long long int  n;
        scanf ( "%lld", &n );
        printf ( "%lld\n", n/2 );
    }
    return 0;
}



