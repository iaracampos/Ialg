#include <iostream>
using namespace std;

int main(){


 double milisegundos, horas,minutos,segundos;

  milisegundos=0;

  cin>>milisegundos;

  milisegundos/=1000;

  horas=milisegundos/3600;
  minutos= (milisegundos % 3600) /60;
  segundos=(milisegundos % 3600) %60;




  cout<<horas<<" :"<<" "<<minutos<<" :" <<" "<<segundos<<endl;



return 0;
}
