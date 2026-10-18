#include <iostream>
using namespace std;

class One{       
     public :	
	 int x;	  
	 void print( )	
	 { cout << x << endl; }	
 }; 

int main ( ) {
      One obj;    
      obj.x = 5 ;   
      obj.print( ) ;

      return 0;

    }			