#include <iostream>
#include <cmath>
using namespace std;
int main(){

 double degraus_cm , h_metros, qtd_degraus ;

   cin>>degraus_cm>>h_metros;

   h_metros*=100;
   qtd_degraus = h_metros/degraus_cm;

   cout<<ceil(qtd_degraus)<<endl;

  return 0 ;
}
