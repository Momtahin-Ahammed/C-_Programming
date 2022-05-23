#include <iostream>
using namespace std;
int main()
{

   char *oddOrEven = "never odd or even";
   char* nthCharPtr = &oddOrEven[5];

    nthCharPtr = nthCharPtr - 2;
cout<<*nthCharPtr<<endl;
   char **pointerPtr = &nthCharPtr;

   cout<< *pointerPtr<<endl;

  cout<<**pointerPtr<<endl;

   nthCharPtr = nthCharPtr + 1;

     cout<<(nthCharPtr - oddOrEven)<<endl;
}

