#include <iostream>
using namespace std;

class Rectangle {         			
		private : int width, length; 
              
		public :			
            void setWidth(int);
	 		void setLength(int);
			int area( ); 
	};
	void Rectangle::setWidth(int w)	
	{    width = w;  }
	void Rectangle::setLength(int lng)	
	{    length = lng;  }
	int Rectangle::area( )	
	{    return length*width;  }
	
    int main ( ) {
	       Rectangle r; 		
	       r.setWidth (5);   		
	       r.setLength (3);   		
	       cout << r.area( );
           
           return 0;
	
        }