
#include <iostream>
#include <fstream>
using namespace std;

    int main()

  {
	 char character;

	  int integer;

	  ofstream out_stream;

     ifstream in_stream;


	   out_stream.open("Integers");

	     out_stream << 123 << ' ' << 456;

	    out_stream.close();


	     in_stream.open("Integers");

	      in_stream >> character >> integer;

            cout << "character: '" << character << "'\n";

         cout << "integer: " << integer << "\n";

	     in_stream >> character >> integer;

	       cout << "character: '" << character << "'\n";

              cout << "integer: " << integer << "\n";

	       in_stream.close();

	     return 0;

  }

    /*THE OUTPUT OF THIS PROGRAM IS:
     character: '1'
    integer: 23
    character: '4'
    integer: 56 THIS IS BECAUSE READING A CHARACTER FROM "in_stream" MOVES THE POSITION
    OF THE STREAM RELATIVE TO THE FILE ALONG BY ONE CHARACTER, AND NUMBERS SUCH
    AS 123 ARE REPRESENTED AS A SEQUENCE OF CHARACTERS '1', '2', '3'. WHEN
    ATTEMPTING TO READ AN INTEGER, THE PROGRAM CONTINUES READING IN INDIVIDUALDIGITS UNTIL IT HITS A WHITE SPACE.*/

