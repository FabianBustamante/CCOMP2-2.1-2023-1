#include<iostream>

using namespace std;

int main(){

int peso;
float altura;
float bmi;

cout<<"Ingresa tu peso: "<<endl;
cin>>peso;

cout<<"Ingresa tu altura: "<<endl;
cin>>altura;

bmi=(peso/(altura*altura));

if(bmi<18.5){

cout<<"Estas bajo de peso, metele una papa mas al caldo";

}

if(bmi>18.5 && bmi<24.9){

cout<<"Tienes un peso normal :)";

}

if(bmi>25 && bmi<29.9){

cout<<"Tienes sobrepeso ";

}

if(bmi>30){

cout<<"Tienes obesidad :( ";

}

return 0;

}
