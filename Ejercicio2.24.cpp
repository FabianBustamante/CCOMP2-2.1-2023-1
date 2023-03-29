#include<iostream>

using namespace std;

int main(){

int num1,num2,suma;

cout<<"Ingresa un numero"<<endl;
cin>>num1;
cout<<"Ingresa otro numero"<<endl;
cin>>num2;

suma=num1+num2;
cout<<"La suma es: "<<suma<<endl;
if(suma%2==0){

cout<<"Por lo tanto es par";

}

else{

cout<<"Por lo tanto es impar";

}

return 0;

}