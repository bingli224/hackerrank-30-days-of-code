#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;

	// Add your code here
    Difference ( vector <int> e ) : elements ( e ) {
    }

    void computeDifference ( ) {
        int min, max;

        min = max = elements [ 0 ];
        //maximumDifference = std::abs ( e [ e.size ( ) - 1 ] - e [ 0 ] );
        std::for_each ( elements.begin ( ) + 1, elements.end ( ),
            [&min, &max] ( int i ) mutable {
                if ( i < min  )
                    min = i;
                else if ( i > max )
                    max = i;

//cout << "min=" << min << " max=" << max << endl;
            }
        );

//cout << "MIN=" << min << " MAX=" << max << " abs(max-min)=" << std::abs ( max - min ) << endl;
        maximumDifference = std::abs ( max - min );
    }

}; // End of Difference class
