#include <iostream>
#include "propriedadesgeometricas.h"
float x=0,y=0,z=0;

int main() {


 cout<<"Digite o um lado do triangulo"<<endl;
 cin>>x;
 cout<<"Digite outro lado do triangulo"<<endl;
 cin>>y;
 cout<<"Digite mais um lado do triangulo"<<endl;
 cin>>z;

 cout<<" "<<endl;
cout<<"****************************"<<endl;
 cout<<" "<<endl;

 cout<<"O perimetro do triangulo e: "<< propgeo::perimetro(x,y,z)<<endl;
 cout<< "A hipotenusa do triângulo e: " <<propgeo::hipotenusa(x,y,z)<<endl;
 cout<<"A area do triangulo e: "<< propgeo::area(x,y,z)<<endl;
}
