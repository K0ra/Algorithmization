// C++ program to display a pattern
// with 5 rows and 3 columns

#include <iostream>
using namespace std;

int main() {

   int rows = 3;
   int columns = 5;
   int tmp = 0;
   for (int i = 1; i <= rows; ++i) {
      for (int j = 1; j <= columns; ++j) {
         // cout << "*  ";
         if (i * j == 4)
            continue;
         tmp += 10;
      }
      cout << endl;
   }

   return 0;
}