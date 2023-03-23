#include <iostream>

using namespace std;
int main() {
int num1,num2,num3;
int suma,resta,producto,promedio,pequeño,grande;

num1=13;
num2=27;
num3=14;

suma=num1+num2+num3;
resta=num1-num2-num3;
producto=num1*num2*num3;
promedio=(num1+num2+num3)/3;

if (num1<num2 && num1<num3){

    pequeño=num1;
    cout<< "el numero mas pequeño es " << pequeño << endl;
}

if (num2<num1 && num2<num3){

    pequeño=num2;
    cout<< "el numero mas pequeño es " << pequeño << endl;
}

if (num3<num1 && num3<num1){

    pequeño=num2;
    cout<< "el numero mas pequeño es " << pequeño << endl;
}

if (num1>num2 && num1>num3){

    grande=num1;
    cout<< "el numero mas grande es " << grande << endl;
}

if (num2>num1 && num2>num3){

    grande=num2;
    cout<< "el numero mas grande es " << grande << endl;
}

if (num3>num1 && num3>num2){

    grande=num3;
    cout<< "el numero mas grande es " << grande << endl;
}


cout<< "la suma es " << suma << endl;
cout<< "la resta es " << resta << endl;
cout<< "el producto es "<< producto <<endl;
cout<< "el promedio es " << promedio <<endl;


return 0;

}
