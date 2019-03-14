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
     * 19:05 THA 14/03/2019
     */
    int returnD, returnM, returnY, expectedD, expectedM, expectedY;
    cin >> returnD >> returnM >> returnY >> expectedD >> expectedM >> expectedY;

    // compare the year
    if ( returnY > expectedY )
        printf ( "10000" );
    else if ( returnY < expectedY )
        printf ( "0" );
    else {
        // compare the month
        if ( returnM > expectedM )
            printf ( "%d", 500 * ( returnM - expectedM ) );
        else if ( returnM < expectedM )
            printf ( "0" );
        else {
            // compare the date
            if ( returnD > expectedD )
                printf ( "%d", 15 * ( returnD - expectedD ) );
            else
                printf ( "0" );
        }
    }
    return 0;
}
