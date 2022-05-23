#include <iostream>

using namespace std;

template<class T1>

   class CArea

  {

     private:

        T1 x,y;


         public:

         void set_values()
 {

        cout << "Put the value of x : ";

        cin>>x;

    cout << "Put the value for y : ";

    cin>>y;

  }

    void area()
  {

        double area = 0.5*x*y;

              cout << "Value of x is: " << x << endl;

             cout << "Value of y is: " << y << endl;

         cout << "Area is: " << area;
     }


     };

         int main()
 {

    CArea<int> obj;


        obj.set_values();

      obj.area();


        return 0;

       }
