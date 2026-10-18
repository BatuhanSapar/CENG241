#include <iostream>
using namespace std;

class One{       
     public :	
	 int x;	  
	 
     private:
     void print( )	
	 { cout << x << endl; }	
 }; 

int main ( ) {
      One obj;    
      obj.x = 5 ;   
      obj.print( ) ;  // What will happen?

      return 0;

    }			