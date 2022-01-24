#include <iostream>
using namespace std;
int main(){

  double minimo,horas,hora_trab,bruto,imposto,s_receber;

    cin>>minimo;
    cin>>horas;

    hora_trab = minimo*0.05 ;
    bruto = horas*hora_trab ;
    imposto = bruto*0.23;
    s_receber = bruto-imposto;

    cout<<s_receber<<endl;



  return 0;
}
