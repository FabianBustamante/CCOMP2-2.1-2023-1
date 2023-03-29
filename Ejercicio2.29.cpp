#include<iostream>

using namespace std;

int main(){

int area,volume;
int lado=0;

cout << "Longitud \tArea\t\tVolumen\n";
cout << "del cubo \tdel cubo\tdel cubo\n";

// Para lado=0

area=6*lado*lado;
volume=lado*lado*lado;

cout<< lado << "\t\t" << area << "\t\t" << volume << endl;

// Para lado=1
lado=1;
area=6*lado*lado;
volume=lado*lado*lado;

cout<< lado << "\t\t" << area << "\t\t" << volume << endl;

// Para lado=2
lado=2;
area=6*lado*lado;
volume=lado*lado*lado;

cout<< lado << "\t\t" << area << "\t\t" << volume << endl;

// Para lado=3
lado=3;
area=6*lado*lado;
volume=lado*lado*lado;

cout<< lado << "\t\t" << area << "\t\t" << volume << endl;

// Para lado=4
lado=4;
area=6*lado*lado;
volume=lado*lado*lado;

cout<< lado << "\t\t" << area << "\t\t" << volume << endl;


return 0;

}