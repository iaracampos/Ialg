#include <iostream>
using namespace std;

int main(){

  float  xA , yA, xB , yB ,m ,q ;

  cin>>xA;
  cin>>yA;
  cin>>xB;
  cin>>yB;

  m= (yB-yA)/(xB-xA);
  q= yA-m*xA;

  cout<<m<<endl;
  cout<<q<<endl;


  return 0;
}
