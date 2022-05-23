
This program illustrates the polymorphic behaviour of virtual functions.
Even though I have a vector of pointers to Rodent,
the actual code executed is according to the dynamic type of the Rodent*
(i.e., the type of the derived object actually being pointed to).
Since Rodent has a pure virtual function (by virtue of the "= 0" above),
it is an abstract class, meaning that no instances of Rodent can be created -
it only exists to define an interface for derived classes to implement. It is possible in C++, however,
to have data and function bodies in an abstract class (a good idea if there is an implementation for the derived classes to share).
For example, if you wanted Mouse::Eat( ) to always call Rodent::eat( ) first, you could implement Rodent::eat( ) and change Mouse::eat( )
to the following:

// Inside of class Mouse:

     void eat() {

         Rodent::eat();

        cout << "Mouse::eat\n";



  }

Note that the virtual destructor works as expected. Even though we use pointers to base to delete the objects,
the derived destructors execute as well.
