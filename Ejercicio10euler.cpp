#include <iostream>
#include <cmath>
using namespace std;

bool es_primo(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    const int limite = 2000000;
    long long suma = 0;
    
    for (int i = 2; i < limite; i++) {
        if (es_primo(i)) {
            suma += i;
        }
    }
    
    cout << "La suma de todos los números primos por debajo de dos millones es: " << suma << endl;
    
    return 0;
}
