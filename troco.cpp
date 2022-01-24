#include <iostream>
#include <cmath>
using namespace std;
int main(){
int valor, pago ,troco , vinte, dez,cinco,dois,um;

  cin>>pago;
  cin>>valor;


  troco=pago-valor;

 vinte=troco/20;
 troco-=vinte*20;
 cout<<vinte<<endl;

 dez=troco/10;
 troco-=dez*10;
 cout<<dez<<endl;

 cinco=troco/5;
 troco-=cinco*5;
 cout<<cinco<<endl;

 dois=troco/2;
 troco-=dois*2;
 cout<<dois<<endl;

 um=troco;
 cout<<um<<endl;

  return 0;
}
