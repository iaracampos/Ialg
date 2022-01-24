#include <iostream>
#include <cmath>
using namespace std;

int main(){

 double xA, yA , xB, yB , x, y;

  cin>>xA;
  cin>>yA;
  cin>>xB;
  cin>>yB;

 x= pow(xB-xA,2);
 y=pow(yB-yA,2);

 cout<<sqrt(x+y)<<endl;

  return 0;
}
