
#include <iostream>
#include <fstream>
using namespace std;

    int main()
{
	 char character;

	 char previous_character;

	 int count = 0;

	    ifstream in_stream;

	 in_stream.open("Sheet4Ex3.cpp");

	 in_stream.get(character);

	 for ( ; ! in_stream.fail() ; )
	{
		count++;

		 previous_character = character;

		  in_stream.get(character);
	 }

	 in_stream.close();

	   cout << "The total number of characters in 'Sheet4Ex3.cpp', ";

	    cout << "is " << count << ".\n";

	  if (count > 1)

		cout << "The last character is a '" << previous_character << "'.\n";

	return 0;
}
