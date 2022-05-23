
#include <iostream>
#include <string>
using namespace std;

   class Shape

    {
        public:

      virtual void draw()

    {

      cout<<"base class drawn"<<endl;

  }

     };

       class circle : public Shape

  {
        public:

        void draw()

  {
     cout<<"circle drawn"<<endl;

   }


  };

    class square : public Shape

  {
       public:

        void draw()

  {

     cout<<"square drawn"<<endl;

    }

    };

        class triangle : public Shape

   {
          public:

          void draw()

   {

        cout<<"triangle drawn"<<endl;

     }


   };
        int main()

    {

         Shape S;

            circle c;

         square s;

    triangle t;

        cout<<"Calling base class function"<<endl;

        S.draw();

            cout<<"Calling derived class function"<<endl;

        c.draw();

            s.draw();

    t.draw();

   }
