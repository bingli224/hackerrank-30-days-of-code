#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

//Write your code here

class Exp : public exception {
    public:
        const char * what ( ) const throw ( ) {
            return "n and p should be non-negative";
        }
};

class Calculator {
    public:
        Calculator ( ) { }

        int power ( int n, int p ) {
            int result = 1;
            if ( n < 0 || p < 0 )
                //throw exception ( "n and p should be non-negative" );
                //throw "n and p should be non-negative";
                throw Exp ( );

            if ( n == 0 )
                return 0;
            while ( p -- > 0 )
                result *= n;

            return result;
        }
};

int main()
{
    Calculator myCalculator=Calculator();
    int T,n,p;
    cin>>T;
    while(T-->0){
      if(scanf("%d %d",&n,&p)==2){
         try{
               int ans=myCalculator.power(n,p);
               cout<<ans<<endl; 
         }
         catch(exception& e){
             cout<<e.what()<<endl;
         }
      }
    }
    
}
