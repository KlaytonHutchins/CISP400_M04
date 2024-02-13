#include "Matrices.h"
#include <iostream>
#include <cmath>
using namespace std;


int main()
{
   Matrices::Matrix a(2, 2);
   a(0, 0) = 0;
   a(0, 1) = -1;

   a(1, 0) = 1;
   a(1, 1) = 0;

   Matrices::Matrix b(2, 4);
   b(0, 0) = 1;
   b(0, 1) = sqrt(3) / 2;
   b(0, 2) = 1;
   b(0, 3) = 0.5;

   b(1, 0) = 0;
   b(1, 1) = 0.5;
   b(1, 2) = 1;
   b(1, 3) = sqrt(3) / 2;

   cout << "a:" << endl << a;
   cout << "b:" << endl << b;
   cout << "c = b + b:" << endl << (b + b);
   cout << "c = a * b:" << endl << (a * b);
}
