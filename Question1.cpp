
#include <iostream>
#include <fstream>
using namespace std;

      int main()
 {
	 char character;

	   ifstream in_stream;

	  in_stream.open("Sheet4Ex1.cpp");

	    in_stream.get(character);

	  for (;!in_stream.fail();)

	 {
		    cout << character;

		 in_stream.get(character);

	   }

     in_stream.close();

	return 0;

   }
