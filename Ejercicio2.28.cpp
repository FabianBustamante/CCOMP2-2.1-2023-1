#include <iostream>
using namespace std;

int main() {
   int num, digito1, digito2, digito3, digito4;

   cout << "Ingrese un número de cuatro dígitos: ";
   cin >> num;

   digito1 = num % 10;
   num = num / 10;
   digito2 = num % 10;
   num = num / 10;
   digito3 = num % 10;
   num = num / 10;
   digito4 = num % 10;

   cout << digito1 << "  " << digito2 << "  " << digito3 << "  " << digito4 << endl;

   return 0;
}





