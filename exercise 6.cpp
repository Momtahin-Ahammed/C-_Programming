#include<iostream>
using namespace std;

  int main()


    void eat()

    {

         Rodent::eat();

    cout << "Mouse::eat\n";

    }

Note that the virtual destructor works as expected. Even though we use pointers to base to delete the objects,
the derived destructors execute as well.You can add BlueHamster or any other class anywhere in this hierarchy.
As long as the 3 functions declared in Rodent are implemented,objects of the new type can be processed with no change at all to doRodentThings( ).
That's the utility of object-oriented programming!
