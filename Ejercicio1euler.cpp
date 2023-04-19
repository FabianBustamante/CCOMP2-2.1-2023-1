#include <iostream>

using namespace std;

int main(){
    int resultado=0;
    for (int i = 1; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            resultado += i;
        }
    }
    cout << "El resultado es: " << resultado << endl;
    return 0;
}