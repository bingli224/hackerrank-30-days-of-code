#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    long *a;
    cin >> n;
    a = new long [ n ];
    std::for_each ( a, a + n, [&] (auto & i) {
        cin >> i;
    } );

    //cout << a [ 0 ] << " " << a [ n - 1 ] << endl;

    int idx = 0;
    long count = 0L;
    while ( idx < n ) {
        // sort
        int j = 0;
        int c = 0;
        while ( j < n - 1 ) {
            if ( a [ j ] > a [ j + 1 ] ) {
                std::swap ( a [ j ], a [ j + 1 ] );
                c ++;
            }
            j ++;
        }

        if ( c <= 0 )
            break;

        count += c;
        idx ++;
    }

    printf ( "Array is sorted in %d swaps.\nFirst Element: %d\nLast Element: %d",
        count,
        a [ 0 ],
        a [ n - 1 ]
    );

    delete ( a );

    return 0;
}
