#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int max = 0;
    int count = 0;
    while ( n > 0 ) {
        if ( n % 2 == 1 )
            count ++;
        else {
            if ( max < count )
                max = count;
            count = 0;
        }
        
        n >>= 1;
    }

    cout << ( max < count ? count : max );

    return 0;
}
