
#include <iostream>
using namespace std;

    class Shape

    {

    public:

  virtual void draw() = 0;

    };


     class Circle : public Shape

     {

       void draw()

  {

    cout << "Drawing Circle \n";

  }

    };

    class Square : public Shape
    {

      void draw()

  {

    cout << "Drawing Square \n";

  }

    };
     class Triangle : public Shape {

       void draw()

  {

    cout << "Drawing Triangle \n";

  }

    };

    int main()

     {

     Shape* s[5];


     Circle* c = new Circle();

    Square* sq = new Square();

    Triangle* t = new Triangle();

      s[1] = c;

       s[2] = sq;

      s[3] = t;

      s[1]->draw();

     s[2]->draw();

      s[3]->draw();


   return 0;

  }
