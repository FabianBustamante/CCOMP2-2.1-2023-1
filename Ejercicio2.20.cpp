#include <iostream>

using namespace std;
int main() {

int area,radio, diametro, circunferencia, arco;
float pi;
cout<< "Ingresa el numero del radio: ";
cin>>radio;
pi=3.14159;
area= pi*(radio*radio);
diametro= 2*radio;
circunferencia=pi*diametro;
arco=pi*radio;


cout<< "el area del circulo es " << area << endl;
cout<< "el diametro del ciruclo es " << diametro << endl;
cout<< "la circunferencia es " << circunferencia << endl;
cout<< "el radio es " << radio << endl; 
cout<< "el arco " << arco << endl;

    return 0;
}