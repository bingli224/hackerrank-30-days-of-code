#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int i1;
    double d1;
    string s1;

    // Read and save an integer, double, and String to your variables.
    cin >> i1 >> d1;

    cin.ignore ( );

    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    while ( true ) {
        getline ( cin, s1 );
        //if ( strlen ( s1 ) > 0 )
            break;
        cout << "request string." << endl;
    }

    cout.precision ( 1 );

    // Print the sum of both integer variables on a new line.
    cout << i1 + i << endl;

    // Print the sum of the double variables on a new line.
    cout << std::fixed << d1 + d << endl;

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s << s1;

    return 0;
