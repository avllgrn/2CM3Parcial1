#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int main(void){
    string Cadena1,Cadena2;
    float numero1,numero2,numero3;

    cout<<"Ingresa un numero ";
    cin>>Cadena1;
    cout<<"Ingresa otro numero ";
    cin>>Cadena2;

    numero1 = atof(Cadena1.c_str());
    numero2 = atof(Cadena2.c_str());

    numero3 = numero1 + numero2;

    cout<<numero1<<" + "<<numero2<<" = "<<numero3<<endl<<endl;

    return 0;
}
