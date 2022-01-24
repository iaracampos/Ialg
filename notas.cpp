 #include <iostream>
  using namespace std;

  int main(){

    int notas,cem,cinq,vint,dez,cinco,dois,um;

    cin>>notas;

    cem=notas/100;
    notas-=cem*100;

    cinq=notas/50;
    notas-=cinq*50;

    vint=notas/20;
    notas-=vint*20;

    dez=notas/10;
    notas-=dez*10;

    cinco=notas/5;
    notas-=cinco*5;

   dois=notas/2;
   notas-=dois*2;

   um=notas;

   cout<<cem<<endl<<cinq<<endl<<vint<<endl<<dez<<endl<<cinco<<endl<<dois<<endl<<um<<endl;

    return 0;
  }
