#include<iostream>

using namespace std;

int main(){

int num1,num2,num3;


cout << "Ingrese un numero: " <<endl;
cin>>num1;
cout << "Ingrese otro numero: " <<endl;
cin>>num2;
cout << "Ingrese un ultimo numero: " <<endl;
cin>>num3;

if(num1%num2==0){
   
cout<<"El primer numero ES factor del segundo"<< endl;

}

else{

cout<<"El primer numero NO es facotr del segundo "<< endl;

}

if(num2%num3==0){


cout<<"El  segundo numero ES factor del tercer numero";

}

else{

cout<<"El segundo numero No es factor del tercer numero";

}

 
return 0;

}