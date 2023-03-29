#include<iostream>

using namespace std;

int main(){

int a,b,c,d,e;
int menor,mayor;


cout<<"Ingresa un valor para a "<<endl;
cin>>a;
cout<<"Ingresa un valor para b "<<endl;
cin>>b;
cout<<"Ingresa un valor para c "<<endl;
cin>>c;
cout<<"Ingresa un valor para d "<<endl;
cin>>d;
cout<<"Ingresa un valor para e "<<endl;
cin>>e;

menor=a;
mayor=a;

if(a>mayor){

mayor=a;

}


if(b>mayor){

mayor=b;

}

if(c>mayor){

mayor=c;

}

if(d>mayor){

mayor=d;

}

if(e>mayor){

mayor=e;

}

if(a<menor){

menor=a;

}

if(b<menor){

menor=b;

}

if(c<menor){

menor=c;

}

if(d<menor){

menor=d;

}

if(e<menor){

menor=e;

}

cout<<"El mayor valor es: " << mayor << endl;
cout<<"El menor valor es: " << menor << endl;


return 0;

}