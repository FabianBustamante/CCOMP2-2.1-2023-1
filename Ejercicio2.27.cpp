#include<iostream>

using namespace std;

int main(){

char simb;

cout<<"Escribe una letra o simbolo: "<<endl;
cin>>simb;

cout<<static_cast<int>(simb)<<endl;
cout<<"Gracias a este numero podras digitalizar el simbolo o letra, usando Alt+numero";

return 0;

}