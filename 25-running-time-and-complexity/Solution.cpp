#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    /**
     * By BingLi224
     * 18:41 THA 14/03/2019
     */
    int N;
    long n;
    cin >> N;

    while ( -- N >= 0 ) {
        cin >> n;

        long div = (long) ( std::sqrt ( n ) );
        while ( div >= 2 ) {
            if ( n % div == 0 ) {
                printf ( "Not prime\n" );
                break;
            }
            div --;
        }

        if ( n == 1 ) // 1 is not prime!
            printf ( "Not prime\n" );
        else if ( div < 2 )
            printf ( "Prime\n" );
    }

    return 0;
}
