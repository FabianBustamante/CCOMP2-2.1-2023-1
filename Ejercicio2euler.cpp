#include <iostream>
using namespace std;

int main() {
    int suma = 0;
    int a = 1;
    int b = 2;
    int actual = 3;
    
    while (actual <= 4000000) {
        if (actual % 2 == 0) {
            suma = suma + actual;
        }
        a = b;
        b = actual;
        actual = a + b;
        
    }
    cout << "La suma resultante es: " << suma << endl;
    return 0;
}