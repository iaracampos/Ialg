#include <iostream>
#include<cmath>
using namespace std;
int main(){

  double homens,caravelas,naus;
  cin>>homens;
   naus=1000;
   caravelas=80;
   homens-=naus;
   homens/=caravelas;
   cout<<ceil(homens)<<endl;

  return 0;
}
